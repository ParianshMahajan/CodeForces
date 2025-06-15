#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<tuple<int, int, int>> ops;

        for (int i = 2; i <= n; ++i) {
            // Right rotate row i by i-1 using 2 reversals
            ops.emplace_back(i, 1, n);              // full reverse
            ops.emplace_back(i, 1, n - (i - 1));     // reverse first n - (i-1)
        }

        cout << ops.size() << '\n';
        for (auto &[i, l, r] : ops) {
            cout << i << ' ' << l << ' ' << r << '\n';
        }
    }

    return 0;
}
