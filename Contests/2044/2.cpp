#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        string s;
        cin >> s;
        string ans="";
        
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='p')ans.push_back('q');
            else if(s[i]=='q')ans.push_back('p');
            else ans.push_back('w');

        }

        cout<<ans<<endl;

    }


    return 0;
}
