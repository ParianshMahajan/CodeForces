#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n,m;
        cin >> n>>m;

        vector<vector<int>>arr(m,vector<int>(n));
        for (int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                cin>>arr[j][i];
            }
        }

        for(int i=0;i<arr.size();i++){
            sort(arr[i].begin(),arr[i].end());
        }


        ll ans=0;

        for(auto ar:arr){

            ll sum=ar[n-1];
            ll perAns=0;
            for(int i=n-2;i>=0;i--){
                perAns+=sum-(ar[i]*(n-1-i));
                sum+=ar[i];
            }
            ans+=perAns;
        }

        cout << ans << endl;
    }

    return 0;
}
