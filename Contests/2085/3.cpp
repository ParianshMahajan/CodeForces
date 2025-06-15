#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;
        
        if (x == y) {
            cout << -1 << endl;
            continue;
        }
        
        if ((x & y) == 0) {
            cout << 0 << endl;
            continue;
        }

        ll commonBits = x & y;

        ll highestBitPos = 0;
        while (commonBits > 1) {
            commonBits >>= 1;
            highestBitPos++;
        }
    
        ll k = (1 << (highestBitPos + 1)) - 1;
    
        while ((x + k) & (y + k)) {
            k++;
        }
        cout << k << endl;
    }

    return 0;
}