#include <bits/stdc++.h>
using namespace std;

int si,sj;
int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
string tem="UDLR";

string path(int i, int j, vector<vector<pair<int,int>>> &par) {
    if (i==si && j==sj) return "";

    int pi=par[i][j].first, pj=par[i][j].second;
    for (int e=0; e<4; e++) {
        if (pi + di[e] == i && pj + dj[e] == j) {
            return path(pi,pj,par)+tem[e];
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> g(n);
    for (int i=0; i<n; i++) cin>> g[i];

    vector<vector<pair<int,int>>> par(n, vector<pair<int,int>>(m));
    vector<vector<int>> dista(n, vector<int>(m, -1));
    vector<vector<int>> distm(n, vector<int>(m, -1));
    queue<pair<int,int>> q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (g[i][j] == 'M') {
                distm[i][j] = 0;
                q.push({i,j});
            }
            else if (g[i][j] == 'A') {
                dista[i][j] = 0;
                si=i;
                sj=j;
            }
        }
    }

    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || distm[ni][nj] != -1 || g[ni][nj] == '#') continue;
            distm[ni][nj] = distm[ci][cj]+1;
            q.push({ni,nj});
        }
    }

    q.push({si,sj});
    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || dista[ni][nj] != -1 || g[ni][nj] == '#') continue;
            par[ni][nj] = {ci, cj};
            dista[ni][nj] = dista[ci][cj]+1;
            q.push({ni,nj});
        }
    }
     
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if ((i==0 || i==n-1 || j==0 || j==m-1) && dista[i][j] != -1 && (dista[i][j] < distm[i][j] || distm[i][j]==-1)) {
                cout<< "YES\n";
                cout<< dista[i][j]<< '\n';
                cout<< path(i,j,par);
                return 0;
            }
        }
    }
    cout<< "NO";
}