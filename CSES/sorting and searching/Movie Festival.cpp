#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    
    vector<pair<int,int>> g(n);
    for (int i=0; i<n; i++) {
        int a,b;
        cin>> a>> b;
        g[i]={b,a};
    }

    sort(g.begin(), g.end());
    int ans=1, prv=g[0].first;
    for (int i=1; i<n; i++) {
        if (g[i].second >= prv) {
            ans++;
            prv=g[i].first;
        }
    }
    cout<< ans;
}