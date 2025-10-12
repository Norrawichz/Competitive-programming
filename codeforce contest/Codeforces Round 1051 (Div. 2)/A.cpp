#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n+1];
        for (int i=1; i<=n; i++) cin>> a[i];

        int l=1, r=n, cur=1;
        bool ok=1;
        while (l<=r) {
            if (a[l]==cur) l++;
            else if (a[r]==cur) r--;
            else {
                ok=0;
                break;
            }
            cur++;
        }
        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}