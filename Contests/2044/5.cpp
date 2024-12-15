#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll k, ll l1, ll r1, ll l2, ll r2) {
    if (k == 1) {
        return max(0LL, min(r1, r2) - max(l1, l2) + 1);
    }
    
    ll count = 0;
    for (ll x = l1; x <= r1; x++) {
        if (x > r2) break;
        
        ll m1 = (l2 > x) ? ceil(log(double(l2) / x) / log(k)) : 0;
        
        ll m2 = floor(log(double(r2) / x) / log(k));
        
        if (m2 >= m1) {
            count += (m2 - m1 + 1);
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        cout << solve(k, l1, r1, l2, r2) << '\n';
    }
    return 0;
}