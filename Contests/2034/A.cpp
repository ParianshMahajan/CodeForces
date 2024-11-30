#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
	

    while (t--) {
        ll a,b;
        cin >> a>>b;

        ll max_num= max(a,b); 
          
    while (1)    
    {  
        if(max_num % a == 0 && max_num % b == 0){  
            cout << max_num << endl;  
                break;  
        }  
        ++max_num; 
	    }  
    }


    return 0;
}
