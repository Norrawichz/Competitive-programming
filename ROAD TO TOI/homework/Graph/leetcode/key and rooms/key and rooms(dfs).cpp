#include <bits/stdc++.h>
using namespace std;

void dfs(int cur, vector<bool> &vst, vector<vector<int>> &r) {
    for (auto x : r[cur]) {
        if (vst[x]) continue;
        vst[x] = true;
        dfs(x);
    }
    return;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<int>> r(n);
    for (int i=0; i<n; i++) {
        int m;
        cin>> m;
        for (int j=0; j<m; j++) {
            int a;
            cin>> a;
            r[i].push_back(a);
        }
    }

    vector<bool> vst(n,0);
    vst[0]=true;
    dfs(0, vst, r);

    bool ok=true;
    for (int i=0; i<n; i++) {
        if (!vst[i]) {
            ok=false;
            break;
        }
    }
    cout<< ok;
}