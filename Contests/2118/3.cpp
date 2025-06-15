#include <bits/stdc++.h>
using namespace std;

int countBits(long long x) {
    return __builtin_popcountll(x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        long long beauty = 0;
        vector<long long> gains;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            beauty += countBits(a[i]);

            long long val = a[i];
            for (int bit = 0; bit < 60; ++bit) {
                if ((val & (1LL << bit)) == 0) {
                    long long next = ((val >> bit) + 1) << bit;
                    long long cost = next - val;
                    if (cost > 1e18) break; // safe guard for very large shifts
                    gains.push_back(cost);
                }
            }
        }

        // Sort and apply cheapest gains
        sort(gains.begin(), gains.end());

        for (long long cost : gains) {
            if (k >= cost) {
                ++beauty;
                k -= cost;
            } else break;
        }

        cout << beauty << '\n';
    }
    return 0;
}
