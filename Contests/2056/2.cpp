#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<string>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int>ans(n);
        
        vector<int>count(n,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i][j]=='0')count[i]++;
                else if(a[i][j]=='1')count[j]++;
            }
        }

        for(int i=0;i<n;i++){
            ans[count[i]]=i+1;
        }
        

        for(auto i:ans)cout<<i<<" ";
        cout<<endl;


    }

    return 0;
}
