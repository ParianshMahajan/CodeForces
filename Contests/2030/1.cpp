#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
		ll maxi=INT_MIN,mini=INT_MAX;

		ll l;
		for(int i=0;i<n;i++){
			cin>>l;
			maxi=max(l,maxi);
			mini=min(l,mini);
			
		}

		cout<<((n-1)*(maxi-mini))<<endl;
		
    }


    return 0;
}
