#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
        cout<<2<<" ";
        for(ll i=2;i<=n;i++){
            cout<< (2*i-1)<<" ";
        }
        cout<<endl;
    }


    return 0;
}
