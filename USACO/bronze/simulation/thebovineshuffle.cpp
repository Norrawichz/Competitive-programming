#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n;
    cin>> n;
    vector<int> cow(n), id(n);
    for (int i=0; i<n; i++) cin>> cow[i];
    for (int i=0; i<n; i++) cin>> id[i];
    for (int t=0; t<3; t++) {
        vector<int> prev(n);
        for (int i=0; i<n; i++) {
            prev[i]=id[cow[i]-1];
        }
        id=prev;
    }
    for (int i=0; i<n; i++) cout<< id[i]<<endl;
}