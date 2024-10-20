#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll a,b;
        cin >> a>>b;

		if(a>=b){
			cout<<a<<endl;
		}
		else{
			cout<<max((ll)0,(a-(b-a)))<<endl;
		}		
		
    }


    return 0;
}
