#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
		vector<char>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ll ans=0;

		unordered_map<ll,bool>m;

		for(int i=0;i<n;i++){
			ll num=i+1;
			if(a[i]=='0'){
				
				if(!m[i]) ans+=num;
				
				int x=2;
				
				while((num*x-1)<n){

					if(a[num*x-1]=='0'){
						
						if(!m[num*x-1]){
							ans+=num;
							m[num*x-1]=true;
						}
						
						x++;
					}

					else break;
				}
			}
		}


		cout<<ans<<endl;
		
    }


    return 0;
}
