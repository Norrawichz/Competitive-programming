#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        int n,m, mx=0, co=0;
        cin>> n>> m;
        int ma[n][m], r[n]={}, c[m]={};
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin>> ma[i][j];
                mx = max(ma[i][j], mx);
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (ma[i][j] == mx) {
                    co++;
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int flag = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (r[i] + c[j] - (ma[i][j] == mx) == co) {
                    flag = 1;
                }
            }
        }
        cout<< mx - flag<< endl;
        
    }
}