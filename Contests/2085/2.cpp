#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main() {

    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int x=0;
        vector<pair<int,int>>ans;

        int z=0;
        int l=0;
        for(int i=0;i<n-1;i++){
            if(n-i-1==2){
                
                if(a[i+1]==0&&a[i+2]==0){
                    ans.push_back({z+2,z+3});
                    ans.push_back({z+1,z+2});
                    break;
                }
            }
            if(a[i]==0||a[i+1]==0){
                a[i+1]=1;
                ans.push_back({z+1,z+2});
            }
            else z++;
        }

      

        if(a.size()-ans.size()==1){
            cout<<ans.size()<<endl;
        }
        else
        cout<<ans.size()+1<<endl;
        
        for(auto &i:ans){
            cout<<i.first<<" "<<i.second<<endl;
        }
        if(a.size()-ans.size()!=1)cout<< 1<<" "<< a.size()-ans.size() <<endl;

    }


    return 0;
}
