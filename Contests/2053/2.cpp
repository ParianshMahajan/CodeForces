#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
        
        unordered_map<ll,ll>m;

        vector<pair<ll,ll>>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i].first;
            cin>>a[i].second;
            if(a[i].first==a[i].second){
                m[a[i].first]++;
            }
        }

        for(auto i:a){
            if(i.first==i.second){
                if(m[i.first]>1)cout<<0;
                else cout<<1;
                continue;
            }            
            
            bool as=false;
            for(int j=i.first;j<=i.second;j++){
                if(m[j]==0){
                    as=true;
                    break;
                }
            }
            if(as) cout<<1;
            else cout<<0;
        }
        cout<<endl;


    }


    return 0;
}
