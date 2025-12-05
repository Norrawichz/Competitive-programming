#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<pair<int,int>> p(n);
    for (int i=0; i<n; i++) {
        int a,b;
        cin>> a>> b;

        p[i] = {a,b};
    }

    int ans=0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) continue;
            if (p[i].first > p[j].first && p[i].second < p[j].second) ans+=p[i].first+p[j].first;
        }
    }
    cout<< ans;
}