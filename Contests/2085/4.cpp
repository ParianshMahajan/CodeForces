#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<ll>> dp;

ll recurse(vector<int>& a, int i, int j, int k) {
    if (i == a.size()) {
        return (j == 0) ? 0 : LLONG_MIN;
    }
    
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    
    ll result = LLONG_MIN;
    
    result = max(result, recurse(a, i+1, j+k, k) + a[i]);
    
    if (j > 0) {
        result = max(result, recurse(a, i+1, j-1, k));
    }
    
    result = max(result, recurse(a, i+1, j, k));
    
    return dp[i][j] = result;
}

int main(){
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        dp.assign(n+1, vector<ll>(n*k+1, -1));
        
        cout << recurse(a, 0, 0, k) << endl;
        
        dp.clear();
        dp.shrink_to_fit();
    }

    return 0;
}