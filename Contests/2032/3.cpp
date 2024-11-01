#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n ;
        ll ans=0;
        vector<ll>a(n);
        
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());

        for(ll i=0;i<n-1;i++){
            if(a[i]+a[i+1]<=a.back()){
                ans++;
            }
        }

        ll ans2=0;
        for(ll i=0;i<n-1;i++){
            if(a[0]+a[1]<=a[n-1-i]){
                ans2++;
            }
        }        

        cout<<min(ans,ans2)<<endl;
    }
    return 0;
}