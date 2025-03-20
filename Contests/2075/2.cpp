#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k==1){
            int start=a[0];
            int back=a.back();
            ll ans=0;
            for(int i=0;i<n-1;i++){
                ans=max(ans,a[i]);
            }   
            if(ans<=start&&ans<=back)cout<<(start+back)<<endl;
            else cout<<ans+max(start,back)<<endl;
            continue;
        }

        sort(a.rbegin(),a.rend());
        ll ans=0;
        for(int i=0;i<=k;i++){
            ans+=a[i];
        }
        cout<<ans<<endl;


    }


    return 0;
}
