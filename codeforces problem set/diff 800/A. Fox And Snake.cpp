#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m, fe=1;
    cin>> n>> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (i%2==0) cout<< "#";
            else if (fe) {
                if (j==m-1) {
                    cout<< '#';
                    fe=0;
                }
                else cout<< '.';
            }
            else {
                if (j==0) cout<< '#';
                else {
                    cout<< '.';
                    if (j==m-1) fe=1;
                }
            }
        }
        cout<< endl;
    }
}