#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n,q;
	cin>>n>>q;
	vector<int>a(n,0);
	ll sum=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}

	while(q--){
		int t;
		cin>>t;
		if(t==1){
			ll i,x;
			cin>>i>>x;
			sum+=x-a[i-1];
			a[i-1]=x;
			cout<<sum<<endl;
		}
		else{
			ll x;
			cin>>x;
			a=vector<int>(n,x);	
			sum=x*n;
			cout<<sum<<endl;
		}
	}


    return 0;
}
