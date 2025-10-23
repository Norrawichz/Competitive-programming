#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int r,c;
    cin>> r>> c;

    vector<string> s(r);
    for (int i=0; i<r; i++) cin>> s[i];

    int si, sj, ei, ej;
    int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
    vector<vector<int>> dw(r, vector<int> (c, INF));
    vector<vector<int>> ds(r, vector<int> (c, -1));
    queue<pair<int,int>> q;

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (s[i][j] == '*') {
                q.push({i,j});
                dw[i][j] = 0;
            }
            else if (s[i][j] == 'S') {
                si=i;
                sj=j;
                ds[i][j] = 0;
            }
            else if (s[i][j] == 'D') {
                ei=i;
                ej=j;
            }
        }
    }

    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=r || nj>=c || dw[ni][nj] != INF || s[ni][nj] == 'X' || s[ni][nj] == 'D') continue;
            dw[ni][nj] = dw[ci][cj]+1;
            q.push({ni,nj});
        }
    }
    q.push({si,sj});
    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        if (s[ci][cj] == 'D') {
            cout<< ds[ci][cj];
            return 0;
        }
        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=r || nj>=c || ds[ni][nj] != -1 || ds[ci][cj]+1>=dw[ni][nj] || s[ni][nj] == 'X') continue;
            ds[ni][nj] = ds[ci][cj]+1;
            q.push({ni,nj});
        }
    }

    cout<< "KAKTUS";
}