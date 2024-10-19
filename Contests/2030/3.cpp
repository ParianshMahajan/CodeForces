#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s="";
		cin>>s;

		if(s[0]=='1' || s.back()=='1' || s.find("11")!=string::npos){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
		// char l;
		// bool turn=true;

		// for(int i=0;i<n;i++){
		// 	cin>>l;
		// 	char curr=l;

		// 	while(s!=""&&curr!=s.back()){
		// 		char prev=s.back();
		// 		s.pop_back();
				
		// 		char result=turn?'1':'0';
		// 		turn=!turn;
		// 		curr=result;
		// 	}
		// 	s.push_back(curr);
			
		// }
       

		// if(boolean(s[0])){
		// 	cout<<"YES"<<endl;
		// }
		// else cout<<"NO"<<endl;

    }

    return 0;
}
