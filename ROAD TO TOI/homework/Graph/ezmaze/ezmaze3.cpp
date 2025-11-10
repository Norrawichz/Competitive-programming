#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    int di[2]={1, 0}, dj[2] = {0, 1};
    queue<pair<int,int>> q;

    vector<vector<int>> dist(n, vector<int>(m,0));
    q.push({0,0});
    a[0][0]='#';

    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();


        for (int e=0; e<2; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || a[ni][nj] == '#') continue;
            a[ni][nj]='#';
            dist[ni][nj] = dist[ci][cj]+1;
            if (ni==n-1 && nj==m-1) {
                cout<< dist[ni][nj];
                return 0;
            }
            q.push({ni,nj});
        }
    }
    cout<< -1;

}