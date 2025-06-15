#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {

    ll t;
    cin >> t;
	

    while (t--) {
        ll n,k;
        cin>>n>>k;
        string s(k, '1');
        
        for(int i=k;i<n;i++){
            s.push_back('0');
        }
        cout<<s<<endl;
    }


    return 0;
}
