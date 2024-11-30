#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

pair<int, int> get_next(int x, int y, char dir) {
    if (dir == 'U') return {x - 1, y};
    if (dir == 'D') return {x + 1, y};
    if (dir == 'L') return {x, y - 1};
    if (dir == 'R') return {x, y + 1};
    return {x, y + 1};
}

bool is_valid(int x, int y, int m, int n) {
    return x >= 0 && x < m && y >= 0 && y < n;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll m, n;
        cin >> m >> n;
        vector<vector<char>> maze(m, vector<char>(n, '?'));
        queue<pair<int, int>> bfs_queue;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> maze[i][j];

                if ((i == 0 && maze[i][j] == 'U') || (i == m - 1 && maze[i][j] == 'D') ||
                    (j == 0 && maze[i][j] == 'L') || (j == n - 1 && maze[i][j] == 'R')) {
                    maze[i][j] = 'B'; 
                    bfs_queue.push({i, j});
                }
            }
        }

        while (!bfs_queue.empty()) {
            auto ld = bfs_queue.front();
            int x=ld.first;
            int y=ld.second;
            bfs_queue.pop();

            // Check all neighbors to see if they lead to this cell
            for (auto dir : {'U', 'D', 'L', 'R'}) {
                
                auto xd = get_next(x, y, dir);
                int nx=xd.first,ny=xd.second;

                if (is_valid(nx, ny, m, n) && maze[nx][ny] != 'B' && maze[nx][ny]!='?') {

                    auto pd = get_next(nx, ny, maze[nx][ny]);
                    int px=pd.first,py=pd.second;

                    if (px == x && py == y) {
                        maze[nx][ny] = 'B';
                        bfs_queue.push({nx, ny});
                    }
                }
            }
        }

        ll trapped_cells = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (maze[i][j] != 'B') {
                    trapped_cells++;
                }
            }
        }

        cout << trapped_cells << endl;
    }

    return 0;
}
