#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 998244353;
 
ll mulmod(ll a, ll b) {
    a %= MOD;
    b %= MOD;
    if(a == 0) return 0;
    if(b == 0) return 0;
    if(b == 1) return a;
    
    ll result = mulmod(a, b/2);
    result = (result * 2) % MOD;
    
    if(b % 2)
        result = (result + a) % MOD;
    
    return result;
}

ll solve(vector<ll>& a, vector<ll>& b) {
    int n = a.size();
    
    vector<ll> sortedA=a, sortedB=b;
    sort(sortedA.begin(), sortedA.end());
    sort(sortedB.begin(), sortedB.end());
    
    

    ll ans = 1;
    for(int i = 0; i < n; i++) {
        ans = mulmod(ans, min(sortedA[i], sortedB[i]));
    }
    return ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, q;
        cin >> n >> q;
        
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
        cout << solve(a, b);
        
        while(q--) {
            int o, x;
            cin >> o >> x;
            x--;
            
            if(o == 1) a[x]++;
            else b[x]++;
            
            cout << " " << solve(a, b);
        }
        cout << "\n";
    }
    
    return 0;
}