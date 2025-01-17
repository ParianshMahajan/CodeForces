#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

vector<pair<int, int>> getPath(int n, int m, string& s) {
    vector<pair<int, int>> path;
    int i = 0, j = 0;
    path.push_back({i, j});
    
    for (char c : s) {
        if (c == 'D') i++;
        else j++;
        path.push_back({i, j});
    }
    return path;
}

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    vector<vector<ll>> grid(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    vector<pair<int, int>> path = getPath(n-1, m-1, s);
    
    vector<ll> rowSum(n, 0);
    vector<ll> colSum(m, 0);
    vector<vector<bool>> isPath(n, vector<bool>(m, false));
    
    vector<int> pathInRow(n, 0);
    vector<int> pathInCol(m, 0);
    
    for (auto& p : path) {
        isPath[p.first][p.second] = true;
        pathInRow[p.first]++;
        pathInCol[p.second]++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!isPath[i][j]) {
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }
    }
    
    ll targetSum = 0;
    bool found = false;
    
    for (int i = 0; i < n && !found; i++) {
        if (pathInRow[i] == 0) {  
            targetSum = rowSum[i];
            found = true;
        }
    }
    
    if (!found) {
        for (int j = 0; j < m && !found; j++) {
            if (pathInCol[j] == 0) {  
                targetSum = colSum[j];
                found = true;
            }
        }
    }
    
    for (auto& p : path) {
        int i = p.first, j = p.second;
        
        if (pathInRow[i] == 1) {
            grid[i][j] = targetSum - rowSum[i];
            rowSum[i] = targetSum;
            colSum[j] += grid[i][j];
        }
        else if (pathInCol[j] == 1) {
            grid[i][j] = targetSum - colSum[j];
            colSum[j] = targetSum;
            rowSum[i] += grid[i][j];
        }
        else {
            grid[i][j] = 0;
            rowSum[i] += grid[i][j];
            colSum[j] += grid[i][j];
        }
        pathInRow[i]--;
        pathInCol[j]--;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}