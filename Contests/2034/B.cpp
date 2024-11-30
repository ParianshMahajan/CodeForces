#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n,m,k;
        cin >> n>>m>>k;
        string a;
        cin>>a;

        ll counter=0;
        ll ans=0;
         for (ll i = 0; i < n; i++) {
            if (a[i] == '0') counter++;
            else counter = 0;  

            if (counter == m) {
                ans++;         
                i=i+k-1;
                counter = 0; 
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}
