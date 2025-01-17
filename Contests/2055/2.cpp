#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> b(n);
        vector<ll> diff(n);

        bool trig = false;
        ll val = 0;
        bool as = false;

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            diff[i] = a[i] - b[i];

            if (trig && diff[i] < 0) as = true;
            if (diff[i] < 0) {
                trig = true;
                val = i;
            }
        }

        if (!trig) {
            cout << "YES" << endl;
            continue;
        }

        if (as) {
            cout << "NO" << endl;
            continue;
        }

        bool xyz = false;
        for (int i = 0; i < n; i++) {
            if (i == val) continue;

            if ((abs(diff[val])) > diff[i]) {
                xyz = true;
                break;
            }
        }

        if (xyz) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
