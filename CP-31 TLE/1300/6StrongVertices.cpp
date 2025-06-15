#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin>>n;

        vector<ll> a(n),b(n);

        for(int i = 0; i < n; i++)cin >> a[i];
        for(int i = 0; i < n; i++)cin >> b[i];
        
        ll maxD=INT_MIN;
        for(int i = 0; i < n; i++)maxD=max(maxD, a[i] - b[i]);
        
        ll count=0;
        for(int i = 0; i < n; i++){
            if(a[i] - b[i]==maxD)count++;
        }

        cout<<count<<endl;
        for(int i = 0; i < n; i++){
            if(a[i] - b[i]==maxD)cout<<i+1<<" ";
        }

        cout<<endl;
    }

    return 0;
}