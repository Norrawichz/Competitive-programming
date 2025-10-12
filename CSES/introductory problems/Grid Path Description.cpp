#include <bits/stdc++.h>
using namespace std;

const int n=7;
int ans=0;
bool grid[n+2][n+2];
string s;

void dfs(int i, int j, int step) {
    if (i==7 && j==1) {
        if (step==48) ans++;
        return;
    }

    bool u=grid[i-1][j];
    bool d=grid[i+1][j];
    bool l=grid[i][j-1];
    bool r=grid[i][j+1];
    if ((u&&d&&!l&&!r)||(!u&&!d&&l&&r)) return;

    char nm=s[step];
    if ((nm=='?' || nm=='U') && !grid[i-1][j]) {
        grid[i-1][j] = 1;
        dfs(i-1, j, step+1);
        grid[i-1][j] = 0;
    }
    if ((nm=='?' || nm=='D') && !grid[i+1][j]) {
        grid[i+1][j] = 1;
        dfs(i+1, j, step+1);
        grid[i+1][j] = 0;
    }
    if ((nm=='?' || nm=='L') && !grid[i][j-1]) {
        grid[i][j-1] = 1;
        dfs(i, j-1, step+1);
        grid[i][j-1] = 0;
    }
    if ((nm=='?' || nm=='R') && !grid[i][j+1]) {
        grid[i][j+1] = 1;
        dfs(i, j+1, step+1);
        grid[i][j+1] = 0;
    }

}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> s;
    for (int i=0; i<=n+1; i++) {
        grid[0][i]=grid[8][i]=1;
        grid[i][0]=grid[i][8]=1;
    }
    grid[1][1]=1;
    dfs(1,1,0);
    cout<< ans;
}