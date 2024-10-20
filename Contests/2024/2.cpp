#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n,k;
        cin >> n>>k;

        vector<ll>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        ll count=0;

        for(int i=0;i<n;i++){
            ll mini=a[i];
            ll remaining=k-mini;
            if(remaining<=mini*(n-i-1)){
                count+=k;
                break;
            }
            else{
                count+=mini+1;
                k-=mini;
            }
        }

        cout<<count<<endl;


    }


    return 0;
}
