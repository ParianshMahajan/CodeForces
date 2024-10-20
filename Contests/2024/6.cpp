#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double maxExpectedValue(int index, const vector<pair<double, ll>>& games, 
                         double currentProduct, ll currentSum, vector<vector<double>>& memo) {
    if (index == games.size()) {
        return (currentProduct / 100.0) * currentSum;
    }

    if (memo[index][currentSum] != -1) {
        return memo[index][currentSum];
    }

    double take = maxExpectedValue(index + 1, games, 
                                    currentProduct * (games[index].first/100), 
                                    currentSum + games[index].second, memo);

    double leave = maxExpectedValue(index + 1, games, 
                                     currentProduct, currentSum, memo);

    return memo[index][currentSum] = max(take, leave);
}

int main() {
    ll n;
    cin >> n;
    vector<pair<double, ll>> games(n);

    for (int i = 0; i < n; i++) {
        cin >> games[i].first >> games[i].second;
    }

    vector<vector<double>> memo(n + 1, vector<double>(10001, -1)); 
    double expectedValue = maxExpectedValue(0, games, 1.0, 0, memo); 

    cout << fixed << setprecision(9) << expectedValue*100 << endl; 
    return 0;
}
