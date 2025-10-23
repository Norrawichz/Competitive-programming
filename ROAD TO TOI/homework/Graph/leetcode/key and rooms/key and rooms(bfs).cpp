#include <bits/stdc++.h>
using namespace std;

int main() {
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

    vector<bool> vst(n, 0);
    queue<int> q;
    vst[0]=true;
    q.push(0);

    while (!q.empty()) {
        int cur=q.front();
        q.pop();

        for (auto x : r[cur]) {
            if (vst[x]) continue;
            vst[x]=true;
            q.push(x);
        }
    }

    bool ok=1;
    for (int i=0; i<n; i++) {
        if (!vst[i]) {
            ok=0;
            break;
        }
    }
    cout<< ok;
}