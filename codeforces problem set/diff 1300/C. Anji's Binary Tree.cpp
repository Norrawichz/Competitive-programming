#include <bits/stdc++.h>
using namespace std;

struct node
{
    int par=0;
    int le=0;
    int ri=0;
    char c;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s;
        cin>> n>> s;
        vector<node> g(n+1);
        for (int i=0; i<n; i++) {
            g[i+1].c = s[i];
        }
        for (int i=1; i<=n; i++) {
            int l,r;
            cin>> l>> r;
            g[i].le = l;
            g[i].ri = r;
        }
        queue<pair<int,int>> q;
        q.push({1, 0});
        int mn= INT_MAX;
        while (!q.empty()) {
            int cur = q.front().first, cost=q.front().second; q.pop();
            if (g[cur].le == 0 && g[cur].ri== 0) {
                mn = min(mn, cost);
                continue;
            }
            if (g[cur].c == 'U') {
                if (g[cur].le != 0) q.push({g[cur].le, cost+1});
                if (g[cur].ri != 0) q.push({g[cur].ri, cost+1});
            }
            else if (g[cur].c == 'L') {
                if (g[cur].le != 0) q.push({g[cur].le, cost});
                if (g[cur].ri != 0) q.push({g[cur].ri, cost+1});
            }
            else {
                if (g[cur].ri != 0) q.push({g[cur].ri, cost});
                if (g[cur].le != 0) q.push({g[cur].le, cost+1});
            }
        }
        cout<< mn<< endl;
    }
}