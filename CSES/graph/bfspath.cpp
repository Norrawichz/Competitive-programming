#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    vector<vector<char>> g(m, vector<char>(n));
    vector<vector<pair<int, int>>> parent(m, vector<pair<int, int>>(n, {-1, -1}));

    queue<pair<int, int>> q;
    pair<int, int> start, end;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'A') {
                start = {i, j};
                q.push(start);
                g[i][j] = '#';
            }
            if (g[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    char p[] = {'U', 'D', 'L', 'R'};

    while (!q.empty()) {
        pair<int, int> current = q.front(); q.pop();
        int x = current.first, y = current.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < m && ny >= 0 && ny < n && g[nx][ny] != '#') {
                parent[nx][ny] = {x, y};
                if (g[nx][ny] == 'B') {
                    string path;
                    int cx = nx, cy = ny;
                    while (make_pair(cx, cy) != start) {
                        pair<int, int> par = parent[cx][cy];
                        for (int j = 0; j < 4; j++) {
                            if (par.first + dx[j] == cx && par.second + dy[j] == cy) {
                                path += p[j];
                            }
                        }
                        cx = par.first;
                        cy = par.second;
                    }
                    reverse(path.begin(), path.end());
                    cout << "YES\n" << path.size() << "\n" << path << "\n";
                    return 0;
                }
                g[nx][ny] = '#';
                q.push({nx, ny});
            }
        }
    }

    cout << "NO\n";
    return 0;
}
