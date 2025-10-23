#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> c(n);
    for (int i=0; i<n; i++) {
        cin>> c[i];
    }

    vector<vector<int>> dist(n, vector<int>(m,0));
    queue<pair<int,int>> q;

    if (c[0][0] == '#') {
        cout<< -1;
        return 0;
    }

    int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
    q.push({0,0});
    c[0][0] = '#';
    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || ni>=n || nj<0 || nj>=m || c[ni][nj] == '#') continue;
            dist[ni][nj] = dist[ci][cj] + 1;
            c[ni][nj] = '#';
            q.push({ni,nj});
        }
    }
    cout<< dist[n-1][m-1];
}