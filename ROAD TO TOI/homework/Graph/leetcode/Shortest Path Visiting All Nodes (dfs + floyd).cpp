#include <bits/stdc++.h>
using namespace std;

int n;

int dfs(int cur, int cnt, int ans, vector<vector<int>> &dist, vector<bool> &vst) {
    if (cnt == n) return ans;

    int mn=INT_MAX;
    for (int i=0; i<n; i++) {
        if (!vst[i]) {
            vst[i] = true;
            mn = min(mn,dfs(i, cnt+1, ans+(cur==-1? 0:dist[cur][i]), dist, vst));
            vst[i] = false;
        }
    }
    return mn;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
   
    cin>> n;

    vector<vector<int>> a(n);

    vector<vector<int>> dist(n, vector<int> (n, INT_MAX));
    for (int i=0; i<n; i++) for (int j=0; j<a[i].size(); j++) {
        dist[i][a[i][j]] = 1;
        dist[a[i][j]][i] = 1;
    }
    for (int i=0; i<n; i++) dist[i][i] = 0;

    for (int k=0; k<n; k++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    vector<bool> vst(n, false);
    int ans = dfs(-1, 0, 0, dist, vst);
    cout<< ans;
}