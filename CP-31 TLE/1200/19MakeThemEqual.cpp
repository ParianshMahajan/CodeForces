#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    

    while (t--) {
        ll n;
		char x;
		string s;

        cin>>n>>x>>s;
		
		if(s==string(n,x)){
			cout<<0<<endl;
		}
		else if(s.back()==x){
			cout<<1<<endl;
			cout<<n<<endl;
        }
		else{
			int i=n-1;
			while(i>=0&&s[i]!=x){
				i--;
			}
			if(i>=0 && (i+1)*2>n){
				cout<<1<<endl;
				cout<<i+1<<endl;
			}
			else{
				cout<<2<<endl;
				cout<<n-1<<" "<<n<<endl;
			}

		}

    }

    return 0;
}
