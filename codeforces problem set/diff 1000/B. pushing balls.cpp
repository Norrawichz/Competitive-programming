#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        cin>> n>> m;
        int valid[n][m]={};

        string a[n];
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        for (int i=0; i<n; i++) for (int j=0; j<m && a[i][j]-'0'; j++) valid[i][j] = 1;
        for (int j=0; j<m; j++) for (int i=0; i<n && a[i][j]-'0'; i++) valid[i][j] = 1;
        bool ans = 1;
        for (int i=0; i<n; i++) for (int j=0; j<m; j++) if (a[i][j]-'0' && !valid[i][j]) ans=0;
        cout<< (ans ? "YES\n" : "NO\n");
    }
}