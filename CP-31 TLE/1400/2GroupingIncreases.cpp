#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>&a,int i,int prevA,int prevB){
	if(i>=a.size())return 0;

	// include
	int inc=solve(a,i+1,a[i],prevB);
	if(prevA!=-1){
		inc+=(a[i]>prevA)?1:0;
	}

	// exclude
	int exc=solve(a,i+1,prevA,a[i]);
	if(prevB!=-1){
		exc+=(a[i]>prevB)?1:0;
	}

	return min(exc,inc);

}


int main(){
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		cout<<solve(a,0,-1,-1)<<endl;
	}

	return 0;
}