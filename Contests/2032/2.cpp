#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        if (n == 1) {
            if (k == 1) {
                cout << 1 << endl << 1 << endl;
            } else {
                cout << -1 << endl;
            }
            continue;
        }
        
        if(n==k||k==1){
            cout<<-1<<endl;
			continue;
        }
		if(k%2==0){
			cout << 3 << endl;
			cout << 1 << " " << k << " " << k+1 << endl;
		}
		else{
			cout << 3 << endl;
			cout << 1 << " " << k-1 << " " << k+2 << endl;
		}
        
    }
    
    return 0;
}