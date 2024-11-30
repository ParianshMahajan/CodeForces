#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

	vector<int> arr(5, 0);
	int x;
	for (ll i = 0; i < 4; i++) {
		cin >> x;
		arr[x - 1]++;
	}

	for (int i=0;i<5;i++) {
		if (arr[i] == 0) {
			cout << i+1 << endl;
			break;
		}
	}

	return 0;
}
