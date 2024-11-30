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
        vector<int> zs;
        vector<int> os;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]==0)zs.push_back(i);
            if(a[i]==1)os.push_back(i);
        }
        ll ans = 0;
        vector<pair<int, int>> v;
        int i=0;
        while(i < n - 1) {
            if (a[i] == 0) i++;
            else if (a[i] == 1) {
                if(!zs.empty() && i<zs.back()){
                    ans++;
                    int l=zs.back();
                    zs.pop_back();
                    os.push_back(l);
                    v.push_back({i + 1, l + 1});
                    a[i]--;
                    a[l]++;
                }
                else i++;
            }
            else if (a[i] == 2) {
                if(!os.empty()&& i<os.back()){
                    int l=os.back();
                    os.pop_back();
                    ans++;
                    v.push_back({i + 1, l + 1});
                    a[i]--;  
                    a[l]++;
                }
                else i++;
            }
        }
        cout << ans << endl;
        for (auto i : v) {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}