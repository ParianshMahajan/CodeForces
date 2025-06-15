#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



const int MOD=998244353;

ll factorial(ll n) {
    return (n == 1 || n == 0) ? 1 : (n * factorial(n - 1)) % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
       string s;
       cin>>s;

        ll n = s.size();
        ll count = 0;
        ll ans=1;
        ll tmp=0;
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                tmp++;
            }
            else{
                if(tmp > 0) {
                    count+=tmp;
                    ans = (((tmp + 1)%MOD)*ans) % MOD;
                    tmp = 0;
                }
            } 
        }
        if(tmp > 0) {
            count += tmp;
            ans = (((tmp + 1)%MOD)*ans) % MOD;
        }
        cout<<count << " " << (ans*(factorial(count)%MOD))%MOD << endl;

    }

    return 0;
}