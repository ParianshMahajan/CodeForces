#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        
        ll ans = 0;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 2; i <= n / 2; i++) {
            if ( a[i-1] == a[i - 2] && a[n-i] == a[n-i-1]) {
                swap(a[n - i], a[i-1]);
            }
        }

        ll tmp = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                tmp++;
            } else {
                ans = max(ans, tmp);
                tmp = 0;  // Reset for the next segment
            }
        }
        ans = max(ans, tmp);  // Final check for the last segment

        cout << ans << endl;
    }

    return 0;
}
