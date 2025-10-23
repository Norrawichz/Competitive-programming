#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n, t;
    cin>> m>> n>> t;
    int dp1[m+1][n+1] = {};
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            dp1[i+1][j+1] = 1;
        } 
    }

    for (int i = 0; i<t; i++) {
        int r, c;
        cin>> r>> c;
        dp1[r+1][c+1] = 0;
    }

    for (int i = 1; i<=m; i++) {
        for (int j = 1; j<=n; j++) {
            if (dp1[i][j] != 0) dp1[i][j] = min({dp1[i][j-1], dp1[i-1][j], dp1[i-1][j-1]}) + 1;
        }
    }
    for (int i = 0; i<=m; i++) {
        for (int j = 0; j<=n; j++) {
            cout<< dp1[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}