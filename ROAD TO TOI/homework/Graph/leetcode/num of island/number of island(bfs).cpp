#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<char>> c(n, vector<char> (m));
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        for (int j=0; j<m; j++) {
            c[i][j] = s[j];
        }
    }

    int di[] = {-1, 1, 0, 0}, dj[] = {0, 0, -1, 1};
    queue<pair<int,int>> q;
    int ans=0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (c[i][j] == '1') {
                q.push({i,j});
                ans++;
                c[i][j] = '0';

                while (!q.empty()) {
                    int ci=q.front().first, cj=q.front().second;
                    q.pop();
                    
                    for (int e=0; e<4; e++) {
                        int ni=ci+di[e], nj=cj+dj[e];
                        if (ni<0 || ni>=n || nj<0 || nj>=m || c[ni][nj] == '0') continue;
                        c[ni][nj] = '0';
                        q.push({ni,nj});
                    }
                }
            }
        }
    }
    cout<< ans;
}