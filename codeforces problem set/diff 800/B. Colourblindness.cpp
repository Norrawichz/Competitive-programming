#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int issame=1;
        char r1[n], r2[n];
        for (int i=0; i<n; i++) cin>> r1[i];
        for (int i=0; i<n; i++) cin>> r2[i];
        for (int i=0; i<n; i++) {
            if (r1[i] == 'G' && r2[i] == 'B') continue;
            if (r1[i] == 'B' && r2[i] == 'G') continue;
            if (r1[i] != r2[i]) {
                issame=0;
                break;
            }
        }
        cout<< (issame ? "YES\n" : "NO\n");
    }
}