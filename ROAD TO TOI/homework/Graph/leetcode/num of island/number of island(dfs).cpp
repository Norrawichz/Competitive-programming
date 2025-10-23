#include <bits/stdc++.h>
using namespace std;

int n,m,di[] = {-1,1,0,0}, dj[] = {0,0,-1,1};

void dfs(int i, int j, vector<vector<char>> &c) {
    for (int e=0; e<4; e++) {
        int ni=i+di[e], nj=j+dj[e];
        if (ni<0 || ni>=n || nj<0 || nj>=m || c[ni][nj] == '0') continue;
        c[ni][nj] = '0';
        dfs(ni,nj,c);
    }
    return;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    vector<vector<char>> c(n, vector<char> (m));
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        for (int j=0; j<m; j++) {
            c[i][j] = s[j];
        }
    }

    int ans=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (c[i][j] == '1') {
                ans++;
                c[i][j] = '0';
                dfs(i,j, c);
            }
        }
    }
    cout<< ans;
}