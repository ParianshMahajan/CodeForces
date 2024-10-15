#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 


int main(){
	ll t;
	cin>>t;
	while(t--){

		ll n,k;
		cin>>n>>k;

		vector<int>arr(n);

        vector<vector<int>> color(k, vector<int>(1,-1));
		

		for(int i=0;i<n;i++){
			cin>>arr[i];
			color[arr[i]-1].push_back(i);
		}

		int ans=INT_MAX;

		for(auto i:color){
			
			int max1=INT_MIN,max2=INT_MIN;
			
			for(int j=0;j<i.size();j++){
				
				int dist=0;
				if(j==i.size()-1){
					dist=n-i[j]-1;
				}
				else{
					dist=i[j+1]-i[j]-1;
				}


				if(dist>max1){
					max2=max1;
					max1=dist;
				}
				else if(dist>max2) max2=dist;

			}
			ans=min(ans,max(max1/2,max2));
		}

		cout<<ans<<endl;


	}

	return 0;
}