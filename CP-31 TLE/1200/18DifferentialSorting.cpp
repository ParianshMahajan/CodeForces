#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;

		vector<int>a(n,0);
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		
		
		if(a[n-1]<a[n-2]){
			cout<<-1<<endl;
			continue;
		}
		else if(a[n-1] < 0){
            bool sorted=true;
            for(ll p=1; p<n; p++){if(a[p-1] > a[p]){sorted=false; break;}}
            if(!sorted){
				cout<<-1<<endl;
			}
			else{
				cout<<0<<endl;
			}
        }
		else{
			cout<<(n-2)<<endl;
			for(int i=0;i<n-2;i++){
				cout<<(i+1)<<" "<<(n-1)<<" "<<(n)<<endl;
			}

		}
		


    }

    return 0;
}
