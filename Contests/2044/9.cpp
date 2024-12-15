#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
	

    while (t--) {
		ll n,q;
		cin>>n>>q;
		
		vector<vector<ll>>m(n,(vector<ll>(n,0)));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>m[i][j];
			}
		}

		while(q--){
			ll sum=0;		
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			int x=1;
			for(int i=a-1;i<=c-1;i++){
				for(int j=b-1;j<=d-1;j++){
					sum+=x*m[i][j];
					x++;
				}
			}
			cout<<sum<<" ";
		}
		cout<<endl;

    }


    return 0;
}
