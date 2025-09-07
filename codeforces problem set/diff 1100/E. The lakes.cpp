#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        cin>> n>> m;
        int g[n][m];
        for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> g[i][j];

        queue<pair<int,int>> q;
        int di[] = {-1, 1, 0, 0}, dj[] = {0, 0, -1, 1},mx = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (g[i][j] != 0) {
                    int sum=g[i][j];
                    g[i][j] = 0;
                    q.push({i,j});
                    while (!q.empty()) {
                        int ci=q.front().first, cj=q.front().second;
                        q.pop();
                        for (int c=0; c<4; c++) {
                            int ni=ci+di[c], nj=cj+dj[c];
                            if (ni >= 0 && nj >= 0 && ni < n && nj < m && g[ni][nj] != 0) {
                                sum += g[ni][nj];
                                g[ni][nj] = 0;
                                q.push({ni, nj});
                            }
                        }
                    }
                    mx = max(mx, sum);
                }
            }
        }
        cout<< mx<< endl;
    }
}