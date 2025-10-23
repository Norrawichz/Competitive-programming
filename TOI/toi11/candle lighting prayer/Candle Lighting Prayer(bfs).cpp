#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> g(n);
    for (int i=0; i<n; i++) cin>> g[i];

    int di[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dj[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int ans=0;
    queue<pair<int,int>> q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (g[i][j] == '1') {
                g[i][j] == '0';
                ans++;
                q.push({i,j});
                while (!q.empty()) {
                    int ci=q.front().first, cj=q.front().second;
                    q.pop();

                    for (int e=0; e<8; e++) {
                        int ni=ci+di[e], nj=cj+dj[e];
                        if (ni<0 || nj<0 || ni>=n || nj>=m || g[ni][nj] == '0') continue;
                        g[ni][nj] = '0';
                        q.push({ni,nj});
                    }
                }
            }
        }
    }
    cout<< ans;
}