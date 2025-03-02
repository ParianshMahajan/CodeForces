#include<bits/stdc++.h>
using namespace std;




int main(){
	int t;
	cin>>t;
	while(t--){

		int n,m;
		cin>>n>>m;
		m++;
		vector<int>a(n);
		int tot=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			tot+=to_string(x).length();
			int zeros=0;
			while(x){
				if(x%10==0)zeros++;
				else break;
				x/=10;
			}
			a.push_back(zeros);
		}

		if(tot<m){
			cout<<"Anna"<<endl;continue;
		}
		sort(a.rbegin(),a.rend());
		int digi=0;
		for(int i=0;i<a.size();i+=2){
			digi+=a[i];
		}
		if(tot-digi<m) {
			cout<<"Anna"<<endl;continue;
		}
		else{
			cout<<"Sasha"<<endl;continue;
		}

	}

	return 0;
}