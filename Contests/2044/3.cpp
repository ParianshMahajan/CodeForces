#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        
        ll ans=0;
        // row1
        if(a>=m)ans+=m;
        else ans+=a;

        // row2
        if(b>=m)ans+=m;
        else ans+=b;


        ll available=0;
        // extras
        if(a<m)available+=m-a;
        if(b<m)available+=m-b;

        if(c<available)ans+=c;
        else ans+=available;

        cout<<ans<<endl;

    }


    return 0;
}
