#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    

    while (t--) {
        ll n;
		string s;

        cin>>n>>s;
		char a=' ',b=' ';


		int l=0,e=n-1;
		while(l<e){
			if(s[l]!=s[e]){
				a=s[l];
				b=s[e];
				break;
			}
			l++;e--;
		}



		if(a==' ' && b==' '){
			cout<<0<<endl;
			continue;
		}



		int nL=l,nR=e;

		// case of a;
		int movesA=0;
		while(l<e){
			if(s[l]!=s[e]){
				if(s[l]==a){
					l++;movesA++;
				}
				else if(s[e]==a){
					e--;movesA++;
				}
				else{
					movesA=-1;
					break;
				}
			}
			else{
				l++;e--;
			}
		}

		l=nL,e=nR;
		int movesB=0;
		while(l<e){
			if(s[l]!=s[e]){
				if(s[l]==b){
					l++;movesB++;
				}
				else if(s[e]==b){
					e--;movesB++;
				}
				else{
					movesB=-1;
					break;
				}
			}
			else{
				l++;e--;
			}
		}

		if(movesA==-1 && movesB==-1) cout<<-1<<endl;
		else if(movesA==-1||movesB==-1) movesA==-1?cout<<movesB<<endl:cout<<movesA<<endl;
		else cout<<min(movesA,movesB)<<endl;

    }

    return 0;
}
