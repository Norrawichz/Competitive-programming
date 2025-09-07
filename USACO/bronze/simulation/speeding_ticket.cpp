#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n,m;
    cin>> n>> m;
    int rseg[n],rlimit[n],cseg[m],cl[m];
    for (int i=0; i<n; i++) cin>> rseg[i]>> rlimit[i];
    for (int i=0; i<m; i++) cin>> cseg[i]>> cl[i];
    int r=0,c=0,mx=0;
    for (int i=1; i<=100; i++) {
        if (i > rseg[r]) {r++;rseg[r]+=rseg[r-1];}
        if (i > cseg[c]) {c++;cseg[c]+=cseg[c-1];}
        mx = max(mx, (cl[c]>rlimit[r]? cl[c]-rlimit[r]:0));
    }
    cout<< mx;
}