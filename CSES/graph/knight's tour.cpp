#include <bits/stdc++.h>
using namespace std;

int g[8][8] = {};
int di[] = {2, 2, -2, -2, 1, -1, 1, -1}, dj[] = {1, -1, 1, -1, 2, 2, -2, -2};
bool found = false;

int countMoves(int i, int j) {
    int cnt = 0;
    for (int x = 0; x < 8; x++) {
        int ni = i + di[x], nj = j + dj[x];
        if (ni >= 0 && ni < 8 && nj >= 0 && nj < 8 && g[ni][nj] == 0)
            cnt++;
    }
    return cnt;
}

void bt(int i, int j) {
    if (found) return;
    if (g[i][j] == 64) {
        found = true;
        return;
    }

    vector<tuple<int, int, int>> nextMoves;
    for (int x = 0; x < 8; x++) {
        int ni = i + di[x], nj = j + dj[x];
        if (ni >= 0 && ni < 8 && nj >= 0 && nj < 8 && g[ni][nj] == 0) {
            int moves = countMoves(ni, nj);
            nextMoves.emplace_back(moves, ni, nj);
        }
    }

    sort(nextMoves.begin(), nextMoves.end());

    for (auto &t : nextMoves) {
        int ni = get<1>(t), nj = get<2>(t);
        g[ni][nj] = g[i][j] + 1;
        bt(ni, nj);
        if (found) return;
        g[ni][nj] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, r;
    cin >> c >> r;

    g[r - 1][c - 1] = 1;
    bt(r - 1, c - 1);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }
}
