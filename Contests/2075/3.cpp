#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<int> a(m);
        for(int i = 0; i < m; i++) {
            cin >> a[i];
        }
        
        // Count frequencies
        map<int, int> freq;
        for(int val : a) {
            freq[val]++;
        }
        
        ll result = 0;
        
        // Process each unique pair
        vector<int> unique;
        for(auto& p : freq) {
            unique.push_back(p.first);
        }
        
        for(int i = 0; i < unique.size(); i++) {
            int x = unique[i];
            
            // Skip if x can't possibly form a valid pair
            if(x + unique.back() < n) continue;
            
            for(int j = i + 1; j < unique.size(); j++) {  // Start from i+1 to skip x==y
                int y = unique[j];
                
                // Skip if pair doesn't satisfy condition
                if(x + y < n) continue;
                
                // Different numbers: freq[x] * freq[y] combinations
                ll pair_freq = (ll)freq[x] * freq[y];
                
                // Apply the formula for this pair
                int min_k = max((ll)1, (ll)n - y);
                int max_k = min((ll)x, (ll)n - 1);
                
                if(min_k <= max_k) {
                    result += ((ll)(max_k - min_k + 1) * 2) * pair_freq;
                }
            }
        }
        
        cout << result << endl;
    }
    return 0;
}