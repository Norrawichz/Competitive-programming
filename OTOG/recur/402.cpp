#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> ans, tem;
int mn=INT_MAX,n,m,s, di[]={-1,0,1};

void bt(int i, int j, int sm) {
    if (j==m-1) {
        if (sm < mn) {
            ans = tem;
            mn = sm;
        }
        return;
    }
    for (int e=0; e<3; e++) {
        if (di[e] + i < 0 || di[e] + i >= n) continue;
        tem.push_back(g[di[e] + i][j+1]);
        bt(di[e] + i, j+1, sm+g[di[e] + i][j+1]);
        tem.pop_back();
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m>> s;
    g.resize(n);
    ans.resize(m);
    for (int i=0; i<n; i++) {
        g[i].resize(m);
        for (int j=0; j<m; j++) {
            cin>> g[i][j];
        }
    }
    s--;
    tem.push_back(g[s][0]);
    bt(s,0, g[s][0]);

    cout<< mn<< "\n";
    for (auto x : ans) cout<< x<< " ";

}