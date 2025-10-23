#include <bits/stdc++.h>
using namespace std;

int n,m, di[8]={-1,-1,-1,0,1,1,1,0}, dj[8]={-1,0,1,1,1,0,-1,-1};
char g[2000][2000];

void dfs(int i, int j) {
    for (int e=0; e<8; e++) {
        if (i+di[e]<0 || j+dj[e]<0 || i+di[e]>=n || j+dj[e]>=m || g[i+di[e]][j+dj[e]]=='0') continue;
        g[i+di[e]][j+dj[e]]='0';
        dfs(i+di[e],j+dj[e]);
    }
    return;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;

    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        for (int j=0; j<m; j++) g[i][j]=s[j];
    }

    int ans=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (g[i][j] == '1') {
                ans++;
                g[i][j] = '0';
                dfs(i,j);
            }
        }
    }
    cout<< ans;
}