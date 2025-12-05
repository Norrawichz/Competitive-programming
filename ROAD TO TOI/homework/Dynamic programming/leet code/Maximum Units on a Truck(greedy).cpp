#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t, s;
    cin>> t>> s;

    vector<pair<int,int>> g(t);
    for (int i=0; i<t; i++) {
        int num, u;
        cin>> num>> u;

        g[i] = {u, num};
    }

    sort(g.rbegin(), g.rend());
    int ans=0;

    for (int i=0; i<t && s; i++) {
        while (s && g[i].second > 0) {
            ans += g[i].first;
            g[i].second--;
            s--;
        }
    }
    cout<< ans;
}