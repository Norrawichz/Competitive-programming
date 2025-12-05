#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<char>> g(n, vector<char>(n));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin>> g[i][j];

    queue<pair<int,int>> q;
    q.push({n-1, n-1});
    
    if (g[n-1][n-1] == 'X') {
        cout<< 0;
        return 0;
    }
    int ans = 1;

    int di[2] = {-1, 0}, dj[2] = {0, -1};
    while (!q.empty()) {
        int i=q.front().first, j=q.front().second;
        q.pop();

        for (int e=0; e<2; e++) {
            int ni=i+di[e], nj=j+dj[e];
            if (ni<0 || nj<0 || g[ni][nj] == 'X') continue;
            ans++;
            g[ni][nj] = 'X';
            q.push({ni,nj});
        }
    }
    cout<< ans;
}