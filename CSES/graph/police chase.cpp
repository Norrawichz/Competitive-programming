#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;

    vector<vector<int>> g(n+1);
    for (int i=0; i<m; i++) {
        int u, v;
        cin>> u>> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    vector<bool> vst(n+1);
    vst[1] = 1;
    q.push(1);

    int count = 0;
    while (!q.empty()) {
        int cur=q.front();
        q.pop();
        for (auto x : g[cur]) {
            if (vst[x]) continue;
            else if (x == n) {
                count++;
            }
            else {
                vst[x] = 1;
                q.push(x);
            }
        }
    }
    cout<< count<< endl;
    for (auto x : g[n]) {
       cout<< x<< " "<< n<< endl; 
    }
    
}