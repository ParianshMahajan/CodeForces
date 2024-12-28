#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool ans=false;
        for(ll i=1;i<n;i++){
            if(2*min(a[i-1],a[i])>max(a[i],a[i-1])){
                ans=true;break;                
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}
