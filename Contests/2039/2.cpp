#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        string s;
        cin >> s;
        bool found = false;

        if (s.length()==1){
            cout<< -1<<endl;
            continue;
        }

       for (ll i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                cout << s[i] << s[i + 1] << endl;
                found = true;
                break;
            }
        }  

        if (found) continue;
        else if(s.length()==2){
            cout<< -1<<endl;
            continue;
        }

        for (ll i = 0; i < s.length() - 2; i++) {
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                cout << s[i] << s[i + 1] << s[i + 2] << endl;
                found = true;
                break;
            }
        }
        if(found) continue;

        cout<<-1<<endl;
    }


    return 0;
}
