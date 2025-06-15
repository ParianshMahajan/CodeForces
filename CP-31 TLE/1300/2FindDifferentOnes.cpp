#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> next_diff(n, n); 
        for (int i = n - 2; i >= 0; --i) {
            if (v[i] != v[i + 1])
                next_diff[i] = i + 1;
            else
                next_diff[i] = next_diff[i + 1];
        }

        int q;
        cin >> q;
        while (q--) {
            ll l, r;
            cin >> l >> r;
            l--, r--;

            if (next_diff[l] <= r) {
                cout << l + 1 << " " << next_diff[l] + 1 << '\n';
            } else {
                cout << -1 << " " << -1 << '\n';
            }
        }
        cout << '\n';
    }

    return 0;
}
