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
        vector<ll>negs(n);
        ll negsCount = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=(i+1)){
                negsCount++;
                a[i]=-1;
            }
            negs[i]=negsCount;
        }   



        ll pairs=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]==-1)continue;
            if(a[i]>=(i+1)){
                pairs+=i-negs[i];
            }
            else{
                if(a[i]-2>=0){
                    pairs+=a[i]-1-negs[a[i]-2];
                }
            }
        }
        cout<<pairs<<endl;
    }

    return 0;
}