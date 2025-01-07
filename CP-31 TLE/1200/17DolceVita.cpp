#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n,x;
        cin>>n>>x;

		vector<int>a(n,0);
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());

		ll s=0,ans=0;

		for(int i=0;i<n;i++){
			s+=a[i];
			if(s<=x){
                ans += ((x-s)/(i+1))+1; 
			}
			else break;
		}

		

		cout<<ans<<endl;

    }

    return 0;
}
