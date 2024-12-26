#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n,moves=0;
        cin >> n;

		vector<string>a(n,"");
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}


		for(ll i=0;i<n/2;i++){
			
			for(ll j=i;j<n-1-i;j++){
				int a1=a[i][j]-'0', a2=a[j][n-i-1]-'0', a3=a[n-i-1][n-j-1]-'0', a4=a[n-j-1][i]-'0';
				int sum=a1+a2+a3+a4;
				if(sum==1||sum==3)moves++;
				else if(sum==2)moves+=2;
			}	

		}
		cout<<moves<<endl;

    }

    return 0;
}
