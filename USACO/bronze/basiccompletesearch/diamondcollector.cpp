#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n,k;
    cin>> n>> k;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a, a+n);
    
    int l=0, r=0;
    int ans=0, tem=0;
    while (r < n) {
        if (a[r]-a[l] <= k) {
            tem++;
            r++;
        }
        else {
            tem--;
            l++;
        }
        ans=max(ans, tem);
    }
    cout<< ans;
}