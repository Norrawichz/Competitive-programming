#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n, t;
    cin>> m>> n>> t;

    int road[t][m];
    for (int i=0; i<t; i++) for (int j=0; j<m; j++) cin>> road[i][j];

    int di[] = {1, 1, 1}, dj[] = {-1, 1, 0};
    vector<vector<int>> parent(t, vector<int>(m, 0));
    queue<pair<int,int>> q;
    q.push({-1, n-1});

    while (!q.empty()) {
        int i=q.front().first, j=q.front().second;
        q.pop();
        for (int c=0; c<3; c++) {
            int ni=i+di[c], nj=j+dj[c];
            if (ni<0 || ni>=t || nj<0 || nj>=m || road[ni][nj] == 1) continue;
            road[ni][nj] = 1;
            parent[ni][nj] = c+1;
            q.push({ni,nj});
        }
    }

    vector<int> ans;
    for (int i=0; i<m; i++) {
        if (parent[t-1][i] != 0) {
            q.push({t-1,i});
            while (!q.empty()) {
                int x=q.front().first, y=q.front().second;
                q.pop();
                int cur=parent[x][y];
                ans.push_back(cur);
                int ni = x-di[cur-1], nj= y-dj[cur-1];
                if (ni<0 || nj<0 || nj>=m) break;
                q.push({ni, nj});
            }
        } 
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans) {
        cout<< x<< endl;
    }
}