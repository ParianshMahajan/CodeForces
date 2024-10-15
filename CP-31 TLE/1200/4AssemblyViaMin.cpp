#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;

		int d=(n*(n-1))/2;

		vector<int>a(d);		
		
        for(int i=0; i<d; i++){
			cin>>a[i];
		}
		
		sort(a.begin(),a.end());


		int q=n-1;
		int i=0;
		while(i<d){
			cout<<a[i]<<" ";
			i+=q;
			q--;
		}
		cout << a[d - 1] << endl;


    }

    return 0;
}
