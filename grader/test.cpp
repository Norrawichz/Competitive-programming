#include <bits/stdc++.h>
using namespace std;

struct Warp {
    bool exist;
    int endr, endc;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c, tp, tk;
    cin>> r>> c>> tp>> tk;
    vector<vector<Warp>> warp(r+1, vector<Warp>(c+1, {false, 0,0}));
    vector<vector<pair<int,int>>> g(r+1, vector<pair<int,int>>(c+1, {INT_MAX, 0}));
    for (int i = 0; i<tp; i++) {
        int wc, wr, ec, er;
        cin>> wr>> wc>> er>> ec;
        warp[wr][wc] = {true, er, ec};
    }
    g[1][1] = {0, 0};
    queue<pair<int,int>> q;
    q.push({1,1});
    int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        for (int i = 0; i<4; i++) {
            int nx = x+dx[i], ny = y+dy[i];
            if (nx >= 1 && nx <= r || ny >= 1 || ny <= c || g[nx][ny].first > g[x][y] + 1) {
                g[nx][ny].first = g[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    



    return 0;
}