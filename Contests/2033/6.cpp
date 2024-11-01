#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll findPisanoPeriod(ll k) {
    if (k == 1) return 1;
    
    ll a = 0, b = 1;
    ll period = 0;
    vector<pair<ll,ll>> seen;
    seen.push_back({0, 1});
    
    while (true) {
        ll c = (a + b) % k;
        a = b;
        b = c;
        period++;
        
        if (find(seen.begin(), seen.end(), make_pair(a, b)) != seen.end()) {
            period = period - (find(seen.begin(), seen.end(), make_pair(a, b)) - seen.begin());
            break;
        }
        seen.push_back({a, b});
    }
    return period;
}

vector<ll> countInPeriod(ll k, ll period) {
    vector<ll> positions;
    ll a = 0, b = 1;
    
    for (ll i = 1; i <= period; i++) {
        ll c = (a + b) % k;
        if (b % k == 0) positions.push_back(i);
        a = b;
        b = c;
    }
    return positions;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        if (k == 1) {
            cout << n << endl;
            continue;
        }
        
        ll period = findPisanoPeriod(k);
        
        vector<ll> positions = countInPeriod(k, period);
        
        if (positions.empty()) {
            cout << "0\n";
            continue;
        }
        
        ll numbersPerPeriod = positions.size();
        ll completePeriodsNeeded = (n - 1) / numbersPerPeriod;
        ll remainder = (n - 1) % numbersPerPeriod;
        
        ll result = (completePeriodsNeeded * period + 
                    (remainder < positions.size() ? positions[remainder] : 0)) % MOD;
        
        cout << result << endl;
    }
    
    return 0;
}