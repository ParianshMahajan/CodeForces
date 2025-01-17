#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n,a,b;
        cin >> n>>a>>b;
        ll ans=abs(a-b)-1;
        if(ans%2==1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}
