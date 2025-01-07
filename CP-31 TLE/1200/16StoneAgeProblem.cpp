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

	unordered_map<int,int>m;
	int r=0;
	while(q--){
		int t;
		cin>>t;
		if(t==1){
			ll i,x;
			cin>>i>>x;
			if(r==0){
				sum+=x-a[i-1];
				a[i-1]=x;
			}
			else if(m[i]){
				sum+=x-m[i];
			}
			else{
				sum+=x-r;
				m[i]=x;
			}
			cout<<sum<<endl;
		}
		else{
			ll x;
			cin>>x;
			sum=x*n;
			r=x;
			m.clear();
			cout<<sum<<endl;
		}
	}


    return 0;
}
