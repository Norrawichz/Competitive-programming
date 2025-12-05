#include <bits/stdc++.h>
using namespace std;

int n;
bool recur(int cur, int val, unordered_map<int, set<int>> &mp, vector<bool> &vst, vector<vector<int>> &g) {
    if (cur == n) return true;

    bool ok=false;
    for (auto &x : g[cur+1]) {
        if (!vst[x] && !mp[x].count(val)) {
            vst[x] = true;
            ok |= recur(cur+1, x, mp, vst, g);
            vst[x] = false;
        }
    }
    return ok;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int k=5;
    while (k--) {
        int m;
        cin>> n>> m;

        vector<int> a(n*2);
        for (int i=0; i<n*2; i++) cin>> a[i];
        vector<int> b(m);
        for (int i=0; i<m; i++) cin>> b[i];

        vector<vector<int>> g(n+1);
        for (int i=1; i<n*2; i+=2) {
            g[i/2+1]={a[i],a[i-1]};
        }

        vector<bool> vst(1000000, false);
        unordered_map<int, set<int>> mp; // check if valid or not
        for (int i=1; i<m; i+=2) {
            mp[b[i]].insert(b[i-1]);
            mp[b[i-1]].insert(b[i]);
        }

        cout<< (recur(0, 0, mp, vst, g) ? "Y":"N");
    }
}