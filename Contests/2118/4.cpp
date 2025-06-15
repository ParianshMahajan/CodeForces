#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        vector<ll> p(n);
        vector<int> d(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        
        map<ll, int> lightDelay;
        for (int i = 0; i < n; i++) {
            lightDelay[p[i]] = d[i];
        }
        
        int q;
        cin >> q;
        
        map<ll, bool> memo; 
        
        while (q--) {
            ll start;
            cin >> start;
            
            if (memo.count(start)) {
                cout << (memo[start] ? "YES" : "NO") << "\n";
                continue;
            }
            
            ll pos = start;
            int dir = 1; 
            bool escaped = false;
            
            set<tuple<ll, int, int>> visited;
            
            for (int time = 0; time < 2 * k * n + 1000; time++) {
                if (pos <= 0 || pos > p.back() + k) {
                    escaped = true;
                    break;
                }
                
                tuple<ll, int, int> state = make_tuple(pos, dir, time % k);
                if (visited.count(state)) {
                    break;
                }
                visited.insert(state);
                
                if (lightDelay.count(pos) && time % k == lightDelay[pos]) {
                    dir = -dir;
                }
                
                pos += dir;
            }
            
            memo[start] = escaped; // Cache result
            cout << (escaped ? "YES" : "NO") << "\n";
        }
    }
    
    return 0;
}