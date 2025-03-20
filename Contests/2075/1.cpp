#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n,k;
        cin>>n>>k;

        int ct=0;
        if(n<=k){
            cout<<1<<endl;continue;
        }

        if(n%2==0){
            // even
            k--;
            int x=n%k;
            if(x==0)cout<<(n/k)<<endl;
            else cout<<(n/k)+1<<endl;
        }
        else{
            n-=k;
            k--;
            int x=n%k;
            if(x==0)cout<<(n/k)+1<<endl;
            else cout<<(n/k)+2<<endl;
        }

    }


    return 0;
}
