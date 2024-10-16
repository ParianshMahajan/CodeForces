#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n,q;
        cin >> n>>q;
		
		vector<ll>maxi(n),prefix(n);
		ll l;
		for(int i=0;i<n;i++){
			cin>>l;
			if(i==0){
				prefix[i]=l;
				maxi[i]=l;
			}
			else{
				prefix[i]=prefix[i-1]+l;
				maxi[i]=max(maxi[i-1],l);
			}
		}


		for(int i=0;i<q;i++){
			ll x;
			cin>>x;

			int up_ind=upper_bound(maxi.begin(),maxi.end(),x)-maxi.begin();

			if(up_ind!=0) cout<<prefix[up_ind-1]<<" ";
			else cout<<0<<" ";

		}


		cout<<endl;
		
    }


    return 0;
}
