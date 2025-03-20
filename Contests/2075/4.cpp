#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;
        
        if(x == y) {
            cout << 0 << endl;
            continue;
        }
        
        // Use BFS with a state representation
        queue<tuple<ll, ll, ll, int>> q;
        map<pair<ll, ll>, set<int>> visited; // Track visited states
        
        // Start with initial state
        q.push(make_tuple(x, y, 0, 0)); // No k used initially
        visited[make_pair(x, y)].insert(0);
        
        ll min_cost = -1;
        
        while(!q.empty()) {
            ll curr_x, curr_y, cost;
            int used_k_mask;
            tie(curr_x, curr_y, cost, used_k_mask) = q.front();
            q.pop();
            
            if(curr_x == curr_y) {
                min_cost = cost;
                break;
            }
            
            // Try all possible k values from 1 to 30
            for(int k = 1; k <= 30; k++) {
                // Skip if k is already used
                if(used_k_mask & (1 << k)) continue;
                
                int new_mask = used_k_mask | (1 << k);
                
                // Try dividing x by 2^k
                ll new_x = curr_x / (1LL << k);
                if(visited[make_pair(new_x, curr_y)].count(new_mask) == 0) {
                    visited[make_pair(new_x, curr_y)].insert(new_mask);
                    q.push(make_tuple(new_x, curr_y, cost + (1LL << k), new_mask));
                }
                
                // Try dividing y by 2^k
                ll new_y = curr_y / (1LL << k);
                if(visited[make_pair(curr_x, new_y)].count(new_mask) == 0) {
                    visited[make_pair(curr_x, new_y)].insert(new_mask);
                    q.push(make_tuple(curr_x, new_y, cost + (1LL << k), new_mask));
                }
            }
        }
        
        cout << min_cost << endl;
    }
    return 0;
}