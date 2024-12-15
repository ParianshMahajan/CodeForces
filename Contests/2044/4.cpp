#include<bits/stdc++.h>
using namespace std;




void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        
		unordered_map<int, int> freq;
        int maxFreq = 0;
        for(int j = 0; j < i; j++) {
            freq[b[j]]++;
            maxFreq = max(maxFreq, freq[b[j]]);
        }
        
        if(freq[a[i]] < maxFreq) {
            b[i] = a[i];
        }
        else if(i == 0 || freq[a[i]] == maxFreq) {
            b[i] = a[i];
        }
        else {
            b[i] = a[i];
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}