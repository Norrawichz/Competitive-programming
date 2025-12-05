#include <bits/stdc++.h>
using namespace std;

int di[] = {-1, 0}, dj[] = {0, -1};
int dfs(int i, int j, vector<vector<char>> &g) {
    int sm=0;
    for (int e=0; e<2; e++) {
        int ni=i+di[e], nj=j+dj[e];
        if (ni<0 || nj<0 || g[ni][nj] == 'X') continue;
        g[ni][nj] = 'X';
        sm+=dfs(ni,nj,g)+1;
    }
    return sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<char>> g(n, vector<char>(n));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin>> g[i][j];

    cout<< (g[n-1][n-1] == 'X' ? 0 :1+dfs(n-1,n-1, g));
}