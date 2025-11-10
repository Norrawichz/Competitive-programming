#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<char>> s(n+1, vector<char>(71, 'o'));
    for (int i=0; i<n; i++) {
        int p,q,r;
        cin>> p>> q>> r;
        for (int j=q; j<q+r; j++) {
            if (j > 70) break;
            s[p][j]='x';
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=70; j++) {
            cout<< s[i][j];
        }
        cout<< '\n';
    }
}