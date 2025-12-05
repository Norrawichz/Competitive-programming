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

    vector<int> team(n+1, -1);
    queue<int> q;

    for (int i=1; i<=n; i++) {
        if (team[i] != -1) continue;

        team[i] = 1;
        q.push(i);
        while (!q.empty()) {
            int cur=q.front();
            q.pop();

            for (auto &x : g[cur]) {
                if (team[x] == team[cur]) {
                    cout<< "IMPOSSIBLE";
                    return 0;
                }
                if (team[x] == -1) {
                    team[x] = (team[cur]+1)%2;
                    q.push(x);
                }
            }
        }
    }
    for (int i=1; i<=n; i++) {
        int c=team[i];
        if (c==0) cout<< 2<< ' ';
        else if (c==1) cout<< 1<< ' ';
    }
}