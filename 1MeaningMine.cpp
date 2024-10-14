#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int x=0;
		for(int i=0;i<n-1;i++){
			x=(a[i]+a[i+1])/2;
			a[i+1]=x;
		}
		cout<<x<<endl;
	}

	return 0;
}