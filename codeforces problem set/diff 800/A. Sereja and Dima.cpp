#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    int l=0, r=n-1, ans[]={0,0}, i=0;
    while (l<=r) {
        if (i%2==0) ans[0]+=max(a[l], a[r]);
        else ans[1]+=max(a[l],a[r]);
        if (a[r] > a[l]) r--;
        else l++;
        i++;
    }
    cout<< ans[0]<<" "<< ans[1];
}