#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to calculate sum for an interval
ll calculateSum(ll l, ll r, ll k) {
    if(r - l + 1 < k) return 0;
    
    ll sum = 0;
    ll len = r - l + 1;
    ll m = ((r - l) / 2) + l;
    if(len % 2 == 1) {
        sum += m;
        sum += calculateSum(l, m - 1, k);
    } else {
        sum += calculateSum(l, m, k);
    }
    sum += calculateSum(m + 1, r, k);
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;
        
        cout << calculateSum(1, n, k) << "\n";
    }

    return 0;
}