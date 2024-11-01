#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];     

        vector<ll>ans(n,0);

        bool flag=false;
        ll i=0;
        while(true){
            if(i==n){
                i=0;
                if(!flag){
                    break;
                }
                flag=false;
                continue;
            }
            
            ll *prev,*next;

            if(i==0)*prev=a[n-1];
            else *prev=a[i-1];

            if(i==n-1)*next=a[0];
            else *next=a[i+1];

            if(a[i]<*prev||a[i]<*next){
                flag=true;
                a[i]+=2;
                prev++;next++;   
                ans[i]++;             
            }
        }

        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}