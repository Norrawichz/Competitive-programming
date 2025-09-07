#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    int n;
    cin>> n;
    vector<pair<int,int>> seg(n);
    int cover[1000]={};
    for (int i=0; i<n; i++) {
        int f,e;
        cin>> f>> e;
        seg[i].first=f;
        seg[i].second=e;
        for (int j=f; j<e; j++) cover[j]++;
    }

    int total=0;
    for (int i=0; i<1000; i++) {
        if (cover[i]>0) total++;
    }

    int mn1=INT_MAX;
    for (auto x : seg) {
        int c1=0;
        for (int i=x.first; i<x.second; i++) {
            if (cover[i] == 1) c1++;
        }
        mn1 = min(mn1, c1);
    }
    cout<< total - mn1;
}