#include<bits/stdc++.h>
using namespace std;




int main(){
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;

		vector<pair<int,int>>a,b,c;

		int l;
		
		for(int i=0;i<n;i++){
			cin>>l;
			a.push_back({l,i});
		}
		
		for(int i=0;i<n;i++){
			cin>>l;
			b.push_back({l,i});
			
		}
		
		for(int i=0;i<n;i++){
			cin>>l;
			c.push_back({l,i});
			
		}

		sort(a.rbegin(),a.rend());
		sort(b.rbegin(),b.rend());
		sort(c.rbegin(),c.rend());

		int ans = INT_MIN;
        
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++) {
                for (int k=0;k<3;k++) {
                    int day1 = a[i].second, day2 = b[j].second, day3 = c[k].second;
                    if (day1 != day2 && day1 != day3 && day2 != day3) {
                        int current_sum = a[i].first + b[j].first + c[k].first;
                        if (current_sum > ans) {
                            ans = current_sum;
                        }
                    }
                }
            }
        }


		cout<<ans<<endl;



	}

	return 0;
}