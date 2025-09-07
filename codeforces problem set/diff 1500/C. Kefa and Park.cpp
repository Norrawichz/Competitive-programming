#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    vector<int> cat(n+1), cnt(n+1, -1), vst(n+1, 0);
    for (int i=1; i<=n; i++) cin>> cat[i];

    vector<vector<int>> g(n+1);
    for (int i=0; i<n-1; i++) {
        int u,v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans=0;
    queue<int> q;
    q.push(1);
    cnt[1]=cat[1];
    vst[1] = 1;
    while (!q.empty()) {
        int cur=q.front();
        q.pop();
        
        if (cur != 1 && g[cur].size()==1) ans++;
        for (auto x : g[cur]) {
            if (vst[x]) continue;
            int nextcnt= (cat[x] ? cnt[cur] + cat[x] : 0);
            if (nextcnt > m) continue;
            vst[x]=1;
            cnt[x]=nextcnt;
            q.push(x);
        }
    }
    cout<<ans;
}