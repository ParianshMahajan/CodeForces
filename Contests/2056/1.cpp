#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalindrome(const vector<int>& vec) {
    if (vec.size() <= 1) {
        return true;
    }
    
    int start = 0;
    int end = vec.size() - 1;
    
    while (start < end) {
        if (vec[start] != vec[end]) {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}


int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll n;
        cin >> n;
        vector<int>a;
        bool flag=false;
        for(int i=0;i<=n;i++){

            a.push_back(1);
            a.push_back(1);
            
            if(flag){
                a.push_back(2);
                a.push_back(3);
            }

        }

    }


    return 0;
}
