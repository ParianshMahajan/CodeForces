#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
		
        ll ans=0;

		vector<vector<int>>arr(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] < 0) {
                    int min_value = INT_MAX;
                    int x = i, y = j;

                    while (x < n && y < n) {
                        min_value = min(min_value, arr[x][y]);
                        arr[x][y]=0;
                        x++;
                        y++;
                    }
                    
                    ans += abs(min_value);
                }
            }
        }


        cout<<ans<<endl;

    }


    return 0;
}
