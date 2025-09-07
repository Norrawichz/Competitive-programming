#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; 
    cin>> m>> n;
    vector<vector<char>> g(m, vector<char>(n));
    vector<vector<pair<int,int>>> parent(m, vector<pair<int,int>>(n));
    vector<vector<int>> distm(m, vector<int>(n, 0));
    vector<vector<int>> distv(m, vector<int>(n, 0));
    vector<vector<bool>> vst1(m, vector<bool>(n, false));
    vector<vector<bool>> vst2(m, vector<bool>(n, false));
    queue<pair<int,int>> q;
    int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
    char ds[]={'U','D','L','R'};
    int sr,sc;
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin>> g[i][j];
            if (g[i][j] == 'M') {
                q.push({i,j});
                vst1[i][j] = true;
            }
            if (g[i][j] == 'A') {
                sr=i;
                sc=j;
            }
        }
    }
    if (sr == m-1 || sc == n-1) {
        cout<< "YES\n"<< 0;
        return 0;
    }
    while (!q.empty()) {
        int x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0; i<4; i++) {
            int nx=x+dx[i], ny=y+dy[i];
            if (nx>=0 && nx<m && ny>=0 && ny<n && !vst1[nx][ny] && g[nx][ny] != '#') {
                distm[nx][ny] = distm[x][y]+1;
                vst1[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }
    q.push({sr,sc});
    while (!q.empty()) {
        int x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0; i<4; i++) {
            int nx=x+dx[i], ny=y+dy[i];
            if (nx>=0 && nx<m && ny>=0 && ny<n && !vst2[nx][ny] && g[nx][ny] != '#') {
                distv[nx][ny] = distv[x][y]+1;
                vst2[nx][ny] = true;
                parent[nx][ny] = {x,y};
                q.push({nx,ny});
            }
        }
    }
    int mnp = INT_MAX;
    int er,ec;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if ((i == m-1 || j == n-1 || i == 0 || j==0) && vst2[i][j] && (distv[i][j] < distm[i][j] || !vst1[i][j]) && (distv[i][j]-distm[i][j] < mnp)) {
                mnp = distv[i][j]-distm[i][j];
                er=i;
                ec=j;
            }
        }
    }
    if (mnp==INT_MAX) {
        cout<< "NO";
        return 0;
    }
    pair<int,int> start={sr,sc};
    string path="";
    while (make_pair(er, ec) != start) {
        int parr=parent[er][ec].first, parc=parent[er][ec].second;
        for (int i=0; i<4; i++) {
            if (parr+dx[i]==er && parc+dy[i]==ec) {
                path+=ds[i];
                break;
            }
        }
        er=parr;
        ec=parc;
    }
    reverse(path.begin(), path.end());
    cout<< "YES\n"<< path.size()<< endl<< path;
    
   
}
