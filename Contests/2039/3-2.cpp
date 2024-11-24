#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll x, m;
        cin >> x >> m;
        ll count = 0;

        for (ll y = 1; y <= m; y++) {

            ll xor_val = x ^ y; 

            if ((xor_val%x == 0) || ( xor_val%y == 0)) {
                count++;
            }
        }

        cout << count << endl;
    }


    return 0;
}
