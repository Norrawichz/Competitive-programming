#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c;
    cin>> r>> c;
    char board[r][c];
    int sr = 0,sc = 0;
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            cin>> board[i][j];
            if (board[i][j] == '@') {
                sr = i;
                sc = j;
            }
        }
    }

    int dis[r][c] = {};
    bool visited[r][c] = {};

    queue<pair<int, int>> q;
    q.push({sr, sc});
    visited[sr][sc] = true;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        int x = cur.first;
        int y = cur.second;
        q.pop();
        for (int i = 0; i<4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                if (!visited[nx][ny] && (board[nx][ny] == '.' || board[nx][ny] == '!')) {
                    visited[nx][ny] = true;
                    dis[nx][ny] = dis[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            if (board[i][j] == '!') {
                if (dis[i][j] != 0) cout<< dis[i][j]<< endl;
                else cout<< -1<< endl;
            }
        }
    }
    return 0;
}