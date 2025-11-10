#include <bits/stdc++.h>
using namespace std;

set<int> ans;

void recur(int cur, int sm, vector<int>&a, vector<vector<bool>> &mem) {
    if (cur == 0) {
        if (sm == 0) return;
        ans.insert(sm);
        return;
    }
    
    if (mem[cur][sm]) return;
    mem[cur][sm] = true;
    recur(cur-1, sm, a, mem);
    recur(cur-1, sm+a[cur-1], a, mem);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    
    vector<vector<bool>> mem(n+1, vector<bool>(100000, 0));
    recur(n, 0, a, mem);
    
    cout<< ans.size()<<'\n';
    for (auto &x : ans) cout<< x<< ' ';
}