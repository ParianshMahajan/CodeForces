#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int getnextInd(int curr, bool submitted, vector<bool>& isSubmit, const vector<pair<ll, ll>>& prblms) {
    if (submitted) {
        for (int j = curr - 1; j >= 0; --j) {
            if (!isSubmit[j]) {
                return j;
            }
        }
    } else {
        int limit = prblms[curr].second;
        for (int j = min(limit - 1, (int)isSubmit.size() - 1); j >= 0; --j) {
            if (!isSubmit[j]) {
                return j;
            }
        }
    }
    return -1;
}

ll recurse(int curr, vector<bool>& isSubmit, const vector<pair<ll, ll>>& prblms, vector<vector<ll>>& memo) {
    if (curr < 0) {
        return 0;
    }

    if (memo[curr][isSubmit[curr]] != -1) {
        return memo[curr][isSubmit[curr]];
    }

    ll maxScore = 0;

    isSubmit[curr] = true;
    int nextIndex = getnextInd(curr, true, isSubmit, prblms);
    maxScore = max(maxScore, prblms[curr].first + recurse(nextIndex, isSubmit, prblms, memo));

    isSubmit[curr] = true;
    nextIndex = getnextInd(curr, false, isSubmit, prblms);
    maxScore = max(maxScore, recurse(nextIndex, isSubmit, prblms, memo));

    isSubmit[curr] = false;
    memo[curr][isSubmit[curr]] = maxScore;

    return maxScore;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> prblms(n);

        for (int i = 0; i < n; i++) {
            cin >> prblms[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> prblms[i].second;
        }

        ll maxScore = 0;
        vector<bool> isSubmit(n, false);
        vector<vector<ll>> memo(n, vector<ll>(2, -1)); // Create a memoization table

        maxScore = recurse(0, isSubmit, prblms, memo);
        
        cout << maxScore << endl;
    }

    return 0;
}
