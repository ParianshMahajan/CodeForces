#include<bits/stdc++.h>
using namespace std;




int main(){
	long long t;
	cin>>t;
	while(t--){

		long long  n,x,y;
		cin>>n>>x>>y;
		
		long long lcm=(x*y)/__gcd(x,y);
		long long common=n/lcm;
		
		long long pos=n/x-common;
		long long neg=n/y-common;



		long long posSum = (n * pos) - (pos * (pos - 1)) / 2;
        long long negSum = (neg * (neg + 1)) / 2;

        long long ans = posSum - negSum;





		cout<<ans<<endl;


	}

	return 0;
}