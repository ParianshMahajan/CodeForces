#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {

    ll t;
    cin >> t;
	

    while (t--) {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        // length==1
        char initChar=s[0];
        string x=string(n,initChar);

        if(n==1||x==s){
            cout<<"NO"<<endl;continue;
        }

        if(k>0){
            cout<<"YES"<<endl;
        }
        else{
            string y=s;
            reverse(y.begin(),y.end());
            if(y>s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }


    }


    return 0;
}
