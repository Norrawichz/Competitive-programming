#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int cnt=0;
    queue<pair<pair<int,int>,int>> q;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
        cin>> a[i][j];
        if (a[i][j] == 1) cnt++;
        else if (a[i][j] == 2) {
            q.push({{i,j}, 0});
        }
    }

    if (cnt == 0) {
        cout<< 0;
        return 0;
    }
    int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
    while (!q.empty()) {
        int ci=q.front().first.first, cj=q.front().first.second, t=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || a[ni][nj] == 2 || a[ni][nj] == 0) continue;
            a[ni][nj] = 2;
            cnt--;
            if (cnt==0) {
                cout<< t+1;
                return 0;
            }
            q.push({{ni,nj}, t+1});
        }
    }
    cout<< -1;
    

}