#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        vector<pair<int,int>> g(n);
        for (int i=0; i<n; i++) {
            cin>> g[i].first;
            g[i].second=i+1;
        }
        sort(g.begin(), g.end());
        if (g[0].first != g[1].first) cout<< g[0].second<< endl;
        else cout<< g[n-1].second<< endl;
    }
}