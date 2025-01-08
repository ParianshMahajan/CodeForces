#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    

    while (t--) {
        ll n;
		cin>>n;		
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans=0;
		for(int i=0;i<n-1;i++){

			int x=a[i];
			int l=2;
			while(x-(i+1)<(i+1)){
				x=x*l;
				l++;
			}

			int j=x-(i+1)-1;

			cout<<j+1<<endl;

			while(j<n){
				if(a[i]*a[j]==i+j+2) ans++;
				j=j+a[i];
			}
		}
		cout<<ans<<endl;
    }

    return 0;
}
