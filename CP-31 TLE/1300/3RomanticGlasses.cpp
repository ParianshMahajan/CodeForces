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
            if (i % 2 == 0)
                v[i] *= -1;
        }

        bool flag = false;
        ll sum = 0;
        set<ll> m;
        m.insert(0);
        
        for (auto &i : v) {
            sum += i;
            if (m.find(sum) != m.end()) {
                flag = true;
                break;
            } else {
                m.insert(sum);
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}