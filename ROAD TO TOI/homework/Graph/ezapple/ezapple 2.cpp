#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> s(n);
    for (int i=0; i<n; i++) cin>> s[i];

    vector<vector<bool>> vst(n, vector<bool> (m,false));
    queue<pair<int,int>> q;
    q.push({0,0});
    vst[0][0] = true;

    int di[2] = {1, 0}, dj[2] = {0, 1};
    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();
        for (int e=0; e<2; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || vst[ni][nj] || s[ni][nj] == '#') continue;
            vst[ni][nj] = true;
            q.push({ni,nj});
        }
    }

    vector<vector<int>> dp(n, vector<int> (m,0));
    int mx=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (s[i][j] == '#') continue;
            dp[i][j] = max((i-1 >= 0 && vst[i-1][j]? dp[i-1][j]: 0), (j-1 >= 0 && vst[i][j-1]? dp[i][j-1] : 0));
            if (s[i][j] >= '0' && s[i][j] <= '9') dp[i][j] += s[i][j] - '0';
            mx=max(mx, dp[i][j]);
        }
    }
    cout<< mx;
}
