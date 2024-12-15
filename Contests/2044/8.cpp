#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
	

    while (t--) {
		ll n;
		cin>>n;
		
		vector<ll>r(n);
		for(int i=0;i<n;i++){
			cin>>r[i];
		}
		
		vector<int>prev(n,1);
		ll count=1;

		while(true){
			count++;
			vector<int>curr=prev;
			for(int i=0;i<n;i++){
				if(curr[i]>0){
					curr[r[i]-1]++;
					curr[i]--;
				}
			}

			bool isSame=true;
			for(int i=0;i<n;i++){
				if(curr[i]!=prev[i]) isSame=false;
			}
			if(isSame) break;

			prev=curr;
		}

		cout<<count<<endl;


    }


    return 0;
}
