#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
        ll ans=0;

        vector<int>a(n+1);
        vector<int>indexes(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            indexes[a[i]]=i;
        }
		

        for(int i=1;i<=n;i++){
            if(i==a[i]) continue;
            else if(i!=a[i]){
                if(a[a[i]]==i)continue;
                else{
                    ans++;
                    swap(a[a[i]], a[indexes[i]] );
                    swap(indexes[a[a[i]]], indexes[a[indexes[i]]]);
                    // find i and swap it with a[i] and i;
                    // such that a[i]==i; And perform it efficiently with least time complexity
                }
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}
