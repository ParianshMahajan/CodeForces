#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin>>n;

        if(n<7){
            cout<<"NO"<<endl;
            continue;
        }

        bool found = false;
        for(int i=2;i<=1000;i++){
            ll val=1+i;
            ll factor=i;
            for(int j=2;j<=20;j++){
                factor*=i;
                val+=factor;
                if(val>1e6) break;
                if(val==n){
                    found = true;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(found) break;
        }
        
        if(!found) cout<<"NO"<<endl;
    }

    return 0;
}