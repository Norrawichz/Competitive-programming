#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin>> m>> n;
    vector<vector<char>> g(m, vector<char>(n));
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin>> g[i][j];

    queue<pair<int,int>> q;
    int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1 ,1};
    int count=0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (g[i][j] == '#') continue;
            g[i][j] = '#';
            q.push({i,j});
            count++;
            while(!q.empty()) {
                int x=q.front().first, y=q.front().second;
                q.pop();
                for (int i=0; i<4; i++) {
                    int nx=x+dx[i], ny=y+dy[i];
                    if (nx>=0 && nx<m && ny>=0 && ny<n && g[nx][ny] == '.') {
                        g[nx][ny] = '#';
                        q.push({nx,ny});
                    }
                }
            }
        }
    }
    cout<< count;
}