#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
            a[i]--;
        }

        vector<bool> ans(n, false);
        ans[a[0]] = true;

        bool ok=true;

        for (int i=1; i<n; i++) {
            if ((a[i] - 1 >= 0 && ans[a[i]-1]) || (a[i] + 1 < n && ans[a[i]+1])) ans[a[i]] = true;
            else {
                ok = false;
                break;
            }
        }

        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}