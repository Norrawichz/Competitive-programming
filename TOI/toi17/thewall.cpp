#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> g(n);
    for (int i=0; i<n; i++) cin>> g[i];

    vector<vector<bool>> w(n, vector<bool> (m, false));
    w[0][0] = w[0][m-1] = w[n-1][0] = w[n-1][m-1] = true;

    queue<pair<int,int>> q;
    q.push({0,0});
    q.push({0,m-1});
    q.push({n-1,0});
    q.push({n-1,m-1});

    int di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1};

    while (!q.empty()) {
        int i=q.front().first, j=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=i+di[e], nj=j+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || w[ni][nj] || g[ni][nj] == 'X') continue;

            w[ni][nj] = true;
            q.push({ni,nj});
        }
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (g[i][j] == 'X') {
                g[i][j] = '.';
                q.push({i,j});
                int sm=0;

                while (!q.empty()) {
                    int ci=q.front().first , cj=q.front().second;
                    q.pop();

                    for (int e=0; e<4; e++) {
                        int ni=ci+di[e] , nj=cj+dj[e];
                        if (ni<0 || nj<0 || ni>=n || nj>=m) continue;
                        sm += w[ni][nj];
                        if (g[ni][nj] == 'X') {
                            g[ni][nj] = '.';
                            q.push({ni,nj});
                        }
                    }
                }
                ans = max(ans, sm);
            }
        }
    }
    cout<< ans;
}