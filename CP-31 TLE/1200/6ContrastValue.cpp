#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;

        vector<int>a(n);
        for (int i=0; i<n; i++) cin>>a[i];

        if(n==1){
            cout << 1 << endl;
            continue;
        }

        int ans=1; 
        int dir=0; 

        for (int i=1; i<n; i++) {
            if (a[i]==a[i-1]) continue;
            
            int newDir = (a[i-1] > a[i]) ? -1 : 1; 
            
            if (newDir!=dir){ 
                ans++;
                dir=newDir; 
            }
        }

        cout << ans << endl;
    }

    return 0;
}
