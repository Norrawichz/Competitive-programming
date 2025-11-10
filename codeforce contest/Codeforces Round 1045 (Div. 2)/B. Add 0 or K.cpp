#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin>> a[i];

        for (int i=0; i<n; i++) a[i] += (a[i]%(k+1)) *k;
        for (int i=0; i<n; i++) cout<< a[i] << ' ';
        cout<< '\n';
    } 
}