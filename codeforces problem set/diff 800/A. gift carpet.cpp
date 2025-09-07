#include <bits/stdc++.h>
using namespace std;

int t, n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>> t;
    while (t--) {
        cin>> n>> m;
        char c[n][m];
        for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> c[i][j];
        char s[4] = {'v', 'i', 'k','a'};
        int fnd = 0;
        for (int i=0; i<m; i++) {
            bool check = 0;
            for (int j=0; j<n; j++) {
                if (c[j][i] == s[fnd]) {
                    check = 1;
                    break;
                }
            }
            if (check) {
                fnd++;
                if (fnd == 4) {
                    break;
                }
            }
        }
        if (fnd == 4) cout<< "YES\n";
        else cout<< "NO\n";
    }

    
}