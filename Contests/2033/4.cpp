#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll ans=0;
        
        unordered_set<ll> st;  
        ll sum=0;
        
        st.insert(0);  
        
        for (int i = 0; i < n; i++) {
            sum += a[i];
            
            if (st.count(sum)) {
                ans++;
                st.clear();
                st.insert(0);  
                sum = 0;  
            }
            st.insert(sum);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
