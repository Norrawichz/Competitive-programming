#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    vector<pair<char,int>> g(n);
    for (int i=0; i<n; i++) cin>> g[i].first>> g[i].second;
    int mncow=INT_MAX;
    for (int i=0; i<n; i++) {
        int tem=0;
        for (int j=0; j<n; j++) {
            if (i==j)continue;
            if (g[j].first == 'G' && g[j].second > g[i].second) tem++;
            else if (g[j].first == 'L' && g[j].second < g[i].second) tem++;
        }
        mncow = min(mncow, tem);
    }
    cout<< mncow;
}