#include <bits/stdc++.h>
using namespace std;
#define int long long

int cost(vector<int> pos) {
    int k = pos.size();
    if (k <= 1) return 0LL;
    vector<int> t(k);
    for (int i = 0; i < k; i++) t[i] = pos[i] - i;
    nth_element(t.begin(), t.begin() + k/2, t.end());
    int med = t[k/2];
    int res = 0;
    for (int x : t) res += llabs(x - med);
    return res;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int ans=INT_MAX, n;
        string s;
        cin>> n>> s;
        
        vector<int> b_p, a_p;
        for (int i=0; i<n; i++) {
            if (s[i] == 'a') a_p.push_back(i);
            else b_p.push_back(i);
        }
        cout << min(cost(a_p), cost(b_p)) << "\n";
    }
}