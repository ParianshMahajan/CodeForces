#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll w,b;
        cin >> w>>b;

		if(w<b)swap(w,b);
		ll rows=1;

		while(w>=rows){
			w-=rows;
			rows++;
			// mini=min(w,b);
		}

		while(b>=rows){
			b-=rows;
			rows++;
		}
		
		cout<<rows-1<<endl;
    }


    return 0;
}
