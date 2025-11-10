#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> b(n, vector<int>(m));
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin>> b[i][j];

    for (int i=1; i<n; i++) b[i][0] += b[i-1][0];
    for (int i=1; i<m; i++) b[0][i] += b[0][i-1];

    for (int i=1; i<n; i++) {
        for (int j=1; j<m; j++) {
            b[i][j] += max(b[i-1][j] , b[i][j-1]);
        }
    }
    cout<< b[n-1][m-1];
}