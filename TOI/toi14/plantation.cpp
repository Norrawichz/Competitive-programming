#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int w;
    cin>> w;
    while (w--) {
        int n,r,d;
        cin>> n>> r>> d;
        vector<pair<int,int>> g(n);

        for (int i=0; i<n; i++) cin>> g[i].first>> g[i].second;

        int checkval=(2*r+d)*(2*r+d);
        bool valid=1;
        queue<pair<int,int>> q;
        vector<bool> vst(n,0);
        q.push({g[0].first, g[0].second});
        while (!q.empty() && valid) {
            pair<int,int> cur = {q.front().first,q.front().second};
            q.pop();
            for (int i=0; i<n; i++) {
                pair<int,int> x = g[i];
                if (x.first == cur.first && x.second == cur.second) continue;
                int xx =(x.first-cur.first) * (x.first-cur.first);
                int y =(x.second-cur.second) * (x.second-cur.second);
                int dist = xx+y;
                if (dist < checkval) {
                    valid=0;
                    break;
                }
                if (!vst[i]) {
                    q.push({x.first, x.second});
                    vst[i]=1;
                }
            }
        }
        if (valid) cout<< "Y\n";
        else cout<< "N\n";
    }
}