#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int countSpecialCases(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    
    for (int start = 0; start < n; start++) {
        priority_queue<int> leftHalf;
        priority_queue<int, vector<int>, greater<int>> rightHalf;
        
        for (int end = start; end < n; end++) {
            int element = nums[end];
            
            if (leftHalf.empty() || element <= leftHalf.top()) {
                leftHalf.push(element);
            } else {
                rightHalf.push(element);
            }
            
            while (leftHalf.size() > rightHalf.size()) {
                rightHalf.push(leftHalf.top());
                leftHalf.pop();
            }
            while (rightHalf.size() > leftHalf.size()) {
                leftHalf.push(rightHalf.top());
                rightHalf.pop();
            }
            
            if ((end - start + 1) % 2 == 1 || 
                (!leftHalf.empty() && !rightHalf.empty() && leftHalf.top() == rightHalf.top())) {
                ans++;
            }
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        cout << countSpecialCases(a) << "\n";  
    }
    return 0;
}