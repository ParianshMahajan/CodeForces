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

        unordered_map<ll, ll> m;
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            while(x--){
                ll y;
                cin>>y;
                m[y]++;
                v[i].push_back(y);
            }
        }

        bool flag = true;

        for(auto&num:v){
            flag = true;
            for(auto&bit:num){
                if(m[bit] == 1){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
                break;
            }
        }

        if(!flag){
            cout<<"NO"<<endl;
        }

    }

    return 0;
}