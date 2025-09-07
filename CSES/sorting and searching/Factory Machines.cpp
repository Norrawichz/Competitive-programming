#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,t;
    cin>> n>> t;
    vector<int> g(n);

    int mn=LONG_LONG_MAX;
    for (int i=0; i<n; i++) {
        cin>> g[i];
        mn=min(mn,g[i]);
    }

    int l=0, r=mn*t;
    while (l < r) {
        int mid=(l+r)/2;
        int sm=0;
        for (auto x : g) {
            sm+=mid/x;
            if (sm >= t) break;
        }
        if (sm >= t) r=mid;
        else l=mid+1;
    }
    cout<< l;
}