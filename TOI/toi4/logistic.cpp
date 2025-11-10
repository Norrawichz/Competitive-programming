#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<pair<int,int>>> g(256);
    for (int i=0; i<n; i++) {
        char u,v;
        int w;
        cin>> u>> v>> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    vector<bool> vst(256, false);
    vector<float> dist(256, 0);

    queue<int> q;

    q.push('X');
    vst['X'] = true;
    while (!q.empty()) {
        int cur=q.front();
        q.pop();

        for (auto &x : g[cur]) {
            vst[x] = true;
            q.push(x);
        }
    }
    if (!vst['Y']) cout<< "broken";
    else {
        while (!q.empty()) {
            int cur=q.front();
            q.pop();

            for (auto &x : g[cur]) {
                float sm=0;

                vst[x] = true;
                q.push(x);
            }
        }
    }
}