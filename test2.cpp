#include <bits/stdc++.h>
using namespace std;

bool isMagic(int i, int j, const vector<vector<int>>& grid, int n) {
    int sum = 0;
    int cnt = 0;
    if (i > 0) sum += grid[i - 1][j], cnt++;
    if (i < n - 1) sum += grid[i + 1][j], cnt++;
    if (j > 0) sum += grid[i][j - 1], cnt++;
    if (j < n - 1) sum += grid[i][j + 1], cnt++;
    return (cnt > 0 && sum == grid[i][j]);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (isMagic(i, j, grid, n))
                grid[i][j] *= 2;

    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][0] = grid[0][0];

    for (int j = 1; j < n; ++j)
        dp[0][j] = dp[0][j - 1] + grid[0][j];

    for (int i = 1; i < n; ++i)
        dp[i][0] = dp[i - 1][0] + grid[i][0];

    for (int i = 1; i < n; ++i)
        for (int j = 1; j < n; ++j)
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];

    cout << dp[n - 1][n - 1] << endl;

    return 0;
}
