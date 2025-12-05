#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int m = 2 * n;
        vector<int> a(m);
        for (int i=0; i<m; i++) cin>> a[i];

        vector<int> cnt(2 * n + 1, 0);
        for (int x : a) cnt[x]++;

        int O = 0, E = 0;
        for (int i=1; i<=2*n; i++) {
            if (!cnt[i]) continue;
            if (cnt[i]%2) O++;
            else E++;
        }

        int ans;
        if (O == 0) {
            int x = min(E, n);
            if ((x%2) != (n%2)) x--;
            if (x < 0) x = 0;
            ans = 2 * x;
        } else {
            ans = O + 2 * min(E, n - O / 2);
        }

        cout<< ans<< '\n';
    }
}
