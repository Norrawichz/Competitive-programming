#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<string> s(n);
    for (int i=0; i<n; i++) cin>> s[i];

    int ans=0;
    if (s[0][0] == '#') {
        cout<< 0;
        return 0;
    }
    else if (s[0][0] == 'o') ans++;

    int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
    queue<pair<int,int>> q;
    q.push({0,0});
    s[0][0] = '#';

    while (!q.empty()) {
        int ci=q.front().first, cj=q.front().second;
        q.pop();

        for (int e=0; e<4; e++) {
            int ni=ci+di[e], nj=cj+dj[e];
            if (ni<0 || nj<0 || ni>=n || nj>=m || s[ni][nj] == '#') continue;

            if (s[ni][nj] == 'o') ans++;   
            s[ni][nj] = '#';
            q.push({ni,nj});
        }
    }

    cout<< ans;
}