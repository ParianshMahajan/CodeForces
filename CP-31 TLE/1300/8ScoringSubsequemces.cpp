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

        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<ll>ans(n);
        int count=1;
        int s=n-1;
        for(int i=n-1;i>=0;i--){
            while(s>=0&&a[s]>=count){
                count++;
                s--;
            }
            ans[i]=count-1;
            count--;
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}