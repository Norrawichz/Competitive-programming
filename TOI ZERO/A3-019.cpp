#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin>> n>> l;
    int n_1[n], l_1[l];
    for (int i = 0; i<n; i++) cin>> n_1[i];
    for (int i = 0; i<l; i++) cin>> l_1[i];

    for (auto x : l_1) {
        if (x-1 == 0) cout<< 0<<endl;
        else {
            int mx = n_1[x-1];
            bool found = false;
            for (int i = x-2; i>=0; i--) {
                if (n_1[i] >= mx) {
                    mx = max(mx, n_1[i]);
                    found = true;
                }
            }
            if (found) cout<< mx - n_1[x-1] + 1<<endl;
            else cout<< 0<<endl;
        }
    }
    return 0;
}