#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int k,n;
    cin>> k>> n;
    bool cow[25][25]={};
    int row[k][n];
    for (int i=0; i<k; i++) for (int j=0; j<n; j++) cin>> row[i][j];
    for (int i=0; i<k; i++) {
        for (int j=0; j<n; j++) {
            for (int c=j+1; c<n; c++) {
                cow[row[i][j]][row[i][c]] = 1;
            }
        }
    }
    int ans=0;
    for (int i=0 ; i<25; i++) {
        for (int j=0; j<25; j++) {
            if (cow[i][j] == 1 && cow[j][i] == 0) ans++;
        }
    }
    cout<< ans;
}