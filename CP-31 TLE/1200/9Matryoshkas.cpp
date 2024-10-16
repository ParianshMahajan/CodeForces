#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
		vector<int>arr(n);

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		map<int,int>m;

		for(auto i:arr){
			m[i]++;
		}

		vector<pair<int,int>>tempArr;

		for(auto &i:m ){
			tempArr.push_back({i.first,i.second});
		}

		ll ans=tempArr[0].second;

		for(int i=1;i<tempArr.size();i++){
			if(tempArr[i].first==tempArr[i-1].first+1){
				ans+=max(0,tempArr[i].second-tempArr[i-1].second);
			}
			else{
				ans+=tempArr[i].second;
			}

		}

		cout<<ans<<endl;
		
    }


    return 0;
}
