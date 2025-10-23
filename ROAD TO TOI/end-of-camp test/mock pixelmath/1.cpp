#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=1, n,m,x;
    cin>> n>> m>> x;

    int tari, tarj;
    vector<vector<char>> b(n, vector<char>(n*2-1, ' '));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n*2-1; j++) {
            if (j >= (n*2-1)/2-i && j<= (n*2-1)/2+i) {
                b[i][j] = '#';
                if (cnt==x) {
                    tari=i;
                    tarj=j;
                } 
                cnt++;
            }
        }   
    }

    for (int i=tari-m/2; i<=tari+m/2; i++) {
        for (int j=tarj-m/2; j<=tarj+m/2; j++) {
            if (i<0 || j<0 || i>=n || j>=n*2-1) continue;
            b[i][j] = ' ';
        }
    }

    for (int k=0; k<n; k++) {
        for (int i=n-1; i>0; i--) {
            for (int j=n*2-2; j>=0; j--) {
                if (b[i][j] == ' ' && b[i-1][j] == '#') {
                    char tem=b[i][j];
                    b[i][j]=b[i-1][j];
                    b[i-1][j]=tem;
                }
            }   
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n*2-1; j++) {
            cout<< b[i][j];
        }
        cout<< "\n";
    }
}