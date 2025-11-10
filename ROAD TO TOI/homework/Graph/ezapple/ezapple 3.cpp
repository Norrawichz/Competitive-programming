#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> s(n);
    for (int i=0; i<n; i++) cin>> s[i];

    if (s[0][0] == '#') {
        cout<< -1;
        return 0;
    }
    int mx=0;
    int di[2] = {1, 0}, dj[2] = {0, 1};
    queue<pair<int,int>> q;
    s[0][0] = '#';
    q.push({0,0});

    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<2; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || s[ni][nj]=='#') continue;
            if (s[ni][nj] >= '0' && s[ni][nj] <= '9') mx = max(mx, s[ni][nj]-'0');
            s[ni][nj] = '#';
            q.push({ni,nj});
        }
    }
    cout<< mx;
}