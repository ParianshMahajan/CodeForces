#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

	ll n, m, q;
	cin >> n >> m >> q;


	vector<ll> rowS(n, 0);
	vector<ll> colS(m, 0);
	vector<ll> a(n), b(m);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	vector<vector<ll>> M(n, vector<ll>(m, 0));

	ll tot = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ll val = a[i] * b[j];
			M[i][j] = val;
			tot += val;
			rowS[i] += val;
			colS[j] += val;
		}
	}

	while (q--) {
		ll x;
		cin >> x;

		ll target = tot - x;
		bool found = false;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ll removed_sum = rowS[i] + colS[j] - M[i][j];
				if (removed_sum == target) {
					cout << "Yes" << endl;
					found = true;
					break;
				}
			}
			if (found) break;
		}

		if (!found) {
			cout << "No" << endl;
		}
	}

	return 0;
}
