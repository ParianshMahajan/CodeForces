#include<bits/stdc++.h>
using namespace std;




int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char x=s[0];
		int num=s[1]-'0';
		for(int i=1;i<=8;i++){
			if(i!=num)cout<<x<<i<<endl;
			if(('a'+i-1)!=x)cout<<(char)('a'+i-1)<<num<<endl;
		}
	}

	return 0;
}