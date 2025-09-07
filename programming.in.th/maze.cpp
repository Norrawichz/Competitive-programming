#include <bits/stdc++.h>
#define pii pair<int, int>
#define minn(a, b) a = min(a, b)
using namespace std;
int n, m, rs, cs, rendd, cendd;
int t[153][153], d1[153][153], d2[153][153];
int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
queue<pii> q;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m >> rs >> cs >> rendd >> cendd;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> t[i][j];
        }
    }

    // BFS from start (rs, cs)
    d1[rs][cs] = 1;
    q.push({rs, cs});
    while (!q.empty()) {
        pair<int,int> cur = q.front();
        int r = cur.first, c = cur.second;
        q.pop();
        for (int k = 0; k < 4; k++) {
            int rnow = r + di[k], cnow = c + dj[k];
            if (rnow <= 0 || cnow <= 0 || cnow > m || rnow > n || d1[rnow][cnow]) continue; // Corrected: use d1
            d1[rnow][cnow] = 1 + d1[r][c]; // Corrected: use d1
            if (t[rnow][cnow]) q.push({rnow, cnow});
        }
    }

    // BFS from end (rendd, cendd)
    d2[rendd][cendd] = 1;
    q.push({rendd, cendd});
    while (!q.empty()) {
        pair<int,int> cur = q.front();
        int r = cur.first, c = cur.second;
        q.pop();
        for (int k = 0; k < 4; k++) {
            int rnow = r + di[k], cnow = c + dj[k];
            if (rnow <= 0 || cnow <= 0 || cnow > m || rnow > n || d2[rnow][cnow]) continue;
            d2[rnow][cnow] = 1 + d2[r][c];
            if (t[rnow][cnow]) q.push({rnow, cnow});
        }
    }

    int ct = 0, mn = 1e9;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!t[i][j] && d1[i][j] && d2[i][j]) {
                ct++;
                minn(mn, d1[i][j] + d2[i][j] - 1);
            }
        }
    }
    cout << ct << endl << mn;
    return 0;
}