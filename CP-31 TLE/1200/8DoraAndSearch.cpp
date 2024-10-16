#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
		
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		if(arr.size()<4){
			cout<<-1<<endl;
			continue;
		}


		ll minEl=1,maxEl=n;
		ll s=0,e=n-1;

		while(e-s>2){
			
			bool start=false,end=false;

			if(arr[s]==minEl){
				minEl=arr[s]+1;
				s++;
			}
			else if(arr[s]==maxEl){
				maxEl=arr[s]-1;
				s++;
			}
			else{
				start=true;
			}
			
			if(arr[e]==minEl){
				minEl=arr[e]+1;
				e--;
			}
			else if(arr[e]==maxEl){
				maxEl=arr[e]-1;
				e--;
			}
			else{
				end=true;
			}

			if(start && end ) break;

		}

		if(e-s<3){
			cout<<-1<<endl;
			continue;
		}


        cout << s+1<<" "<<e+1<< endl;
    }

    return 0;
}
