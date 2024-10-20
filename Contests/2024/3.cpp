#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool customComparator(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    ll maxA = max(a.first, a.second);
    ll maxB = max(b.first, b.second);
    
    // If max elements are the same, sort by the smaller element
    if (maxA == maxB) {
        return min(a.first, a.second) < min(b.first, b.second);
    }
    return maxA < maxB;
}

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;

        vector<pair<ll,ll>>a(n);


        
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            cin>>a[i].second;
        }

        sort(a.begin(), a.end(), customComparator);


        for (const auto& p : a) {
            cout << p.first << " " << p.second <<" ";
        }
        cout<<endl;
    }


    return 0;
}
