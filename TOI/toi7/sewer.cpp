#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
    vector<vector<char>> c(n, vector<char>(m));
    int go[n+2][m+2][4]={};//0 up 1 down 2 left 3 right
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
        cin>> c[i][j];
        if (c[i][j] == 'D') {
            go[i][j][1]=1;
            go[i+1][j][0]=1;
        }
        if (c[i][j] == 'B') {
            go[i][j][1]=1;
            go[i+1][j][0]=1;
            go[i][j][3]=1;
            go[i][j+1][2]=1;
        }
        if (c[i][j] == 'R') {
            go[i][j][3]=1;
            go[i][j+1][2]=1;
        }
    }

    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<pair<int,int>,pair<pair<int,int>, int>>> q;
    dist[0][0] = 0;
    q.push({{0,0}, {{-1, -1}, 1}});

    while (!q.empty()) {
        int ci=q.front().fi.fi, cj=q.front().fi.se, t=q.front().se.se, prei=q.front().se.fi.fi, prej=q.front().se.fi.se;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || (ni==prei && nj==prej) || !go[ci][cj][e]) continue;
            if (dist[ni][nj] != -1) {
                cout<< t+1<< "\n";
                cout<< ni+1<< " "<< nj+1;
                return 0;
            }
            dist[ni][nj] = dist[ci][cj]+1;
            q.push({{ni,nj}, {{ci, cj}, t+1}});

        }  
    }
    return 0;
}