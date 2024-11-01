#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
		ll ones=0,zeros=0;
		int l;
		for(int i=0;i<2*n;i++){
			cin>>l;
			if(l==0)zeros++;
			else ones++;
		}

		if(zeros%2==0){
			cout<<0<<" ";
		}else{
			cout<<1<<" ";
		}

		cout<<min(zeros,ones)<<endl;
		
    }


    return 0;
}
