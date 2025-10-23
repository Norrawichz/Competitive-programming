#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c;
    cin>> r>> c;
    vector<vector<char>> g(r, vector<char>(c));
    for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin>> g[i][j];

    queue<pair<int,int>> q;
    vector<vector<bool>> water(r, vector<bool>(c,false));
    int dx[]={-1,1,0,0}, dy[]={0,0,-1,1};
    q.push({0,0});
    q.push({r-1,0});
    q.push({0,c-1});
    q.push({r-1,c-1});

    while (!q.empty()) {
        int x=q.front().first, y=q.front().second;
        q.pop();
        if (water[x][y] ) continue;
        water[x][y] = true;
        for (int i=0; i<4; i++) {
            int nx=x+dx[i], ny=y+dy[i];
            if (nx>=0 && nx<r && ny>=0 && ny<c && !water[nx][ny] && g[nx][ny] != 'X') {
                q.push({nx,ny});
            }
        }
    }
    
    int mx = INT_MIN;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (g[i][j]=='.') continue;
            g[i][j] = '.';
            q.push({i,j});
            int count =0;
            while (!q.empty()) {
                int x=q.front().first, y=q.front().second;
                q.pop();
                for (int i=0; i<4; i++) {
                    int nx=x+dx[i], ny=y+dy[i];
                    if (nx>=0 && nx<r && ny>=0 && ny<c) {
                        if (g[nx][ny] ==  'X') {
                            q.push({nx,ny});
                            g[nx][ny] = '.';
                        }
                        else if (water[nx][ny]){
                            count++;
                        }
                    }
                }
            }
            mx=max(mx,count);
        }
    }
    cout<< mx;
}

