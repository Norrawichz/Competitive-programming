#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    vector<pair<int,int>> g(t);
    for (int i=0; i<t; i++) {
        cin>> g[i].first>> g[i].second;
    }

    for (int i=0; i<t; i++) {
        bool ok=true;
        for (int j=0; j<t; j++) {
            if (i==j) continue;
            if (g[i].first < g[j].first && g[i].second < g[j].second) {
                ok=false;
                break;
            }
        }
        if (ok) cout<< g[i].first<<' '<< g[i].second<< '\n';
    }
}