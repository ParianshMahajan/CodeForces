#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n,x,y;
        cin >> n >> x>>y;

		vector<int>a(n);
		vector<int>rem(n);
		unordered_map<int,int>m;

		for(int i=0;i<n;i++){
			cin>>a[i];
			int r=a[i]%x;
			m[a[i]]++;
		}
        

		ll ans=0;

		for(auto i:a){
			int rem=i%x;
			if(m[rem]==0)continue;
			if(i==rem && m[rem]<2)continue;
			
			if(abs(rem-i)%y==0){
				cout<<i<<" "<<rem<<endl;
				m[rem]--;m[i]--;ans++;
			}
		}
        
        cout<<ans<<endl;
    }
    
    return 0;
}