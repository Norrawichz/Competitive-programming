#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> color(n+1, 0);
    queue<int> q;

    for (int i=1; i<=n; i++) {
        if (color[i] != 0) continue;

        color[i] = i;
        q.push(i);
        while (!q.empty()) {
            int cur=q.front();
            q.pop();

            for (auto &x : g[cur]) {
                if (color[x] != 0) continue;
                color[x] = color[cur];
                q.push(x);
            }
        }
    }
    vector<bool> vst(n+1, false);
    vector<int> ans;
    for (int i=1; i<=n; i++) {
        if (!vst[color[i]]) {
            vst[color[i]] = true;
            ans.push_back(i);
        }
    }
    if (ans.size() == 0) {
        cout<< 0<< '\n';
        return 0;
    }
    cout<< ans.size()-1<< '\n';
    for (int i=1; i<ans.size(); i++) {
        cout<< ans[0]<< ' '<< ans[i]<< '\n';
    }
}