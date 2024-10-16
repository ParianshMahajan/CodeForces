#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
		vector<int>temp(n);
		vector<int>budget;

		for(int i=0;i<n;i++){
			cin>>temp[i];
		}
		for(int i=0;i<n;i++){
			int l;cin>>l;
			budget.push_back(l-temp[i]);
		}

		sort(budget.begin(),budget.end());

		// for(auto i:budget){
		// 	cout<<i<<" ";
		// }
		// cout<<endl;

		if(budget[0]>0){
			cout<<n/2<<endl;
			continue;
		}
		else if(budget[n-1]<0){
			cout<<0<<endl;
			continue;
		}

		ll ans=0;

		ll s=0,e=n-1;
		while(s<e){
			if(budget[s]+budget[e]>=0){
				ans++;
				s++;e--;
			}
			else s++;
		}

		cout<<ans<<endl;
		
    }


    return 0;
}
