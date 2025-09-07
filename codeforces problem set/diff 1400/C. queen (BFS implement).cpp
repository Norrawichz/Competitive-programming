#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n;
    cin>> n;
    vector<bool> del(n+1, 1);
    vector<vector<int>> g(n+1);
    vector<bool> nres(n+1);
    int st = -1;
    for (int i=1; i<=n; i++) {
        int p, c;
        cin>> p>> c;
        if (p < 0) {
            nres[i] = c;
            st=i;
        }
        else {
            g[p].push_back(i);
            nres[i] = c;
        }
    }

    queue<int> q;
    q.push(st);
    while (!q.empty()) {
        int cur=q.front();q.pop();
        bool have_res= 0;
        for (auto x : g[cur]) {
            if (nres[cur] && !nres[x]) {
                have_res=1;
            }
            q.push(x);
        }
        if (!have_res && nres[cur]) del[cur] = 0; 
    }
    bool found=0;
    for (int i=1; i<=n; i++) {
        if (!del[i]) {
            found = 1;
            cout<< i<< " ";
        }
    }
    if (!found) cout<< -1<< " ";
}