#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n,moves=0,s;
        cin >> n>>s;

		ll initSum=0;
		vector<int>a(n,0);
		for(ll i=0;i<n;i++){
			cin>>a[i];
			initSum+=a[i];
		}

		if(initSum<s){
			cout<<-1<<endl;
		}
		else{
			ll l=0,r=n-1;	
			while(initSum!=s){
				while(a[l]==1){
					l++;
					initSum--;
					moves++;
					if(initSum==s) break;
				}
				if(initSum==s) break;

				while(a[r]==1){
					r--;
					initSum--;
					moves++;
					if(initSum==s) break;
				}
				if(initSum==s) break;



			}
			cout<<moves<<endl;
		}
		

    }

    return 0;
}
