#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        cin>> n>> m;

        int a[m];
        for (int i=0; i<m; i++) cin>> a[i];

        int ok=0;
        for (int i=1; i<m; i++) {
            if (a[i] <= a[i-1]) {
                ok=1;
                break;
            }
        }

        if (ok) cout<< "1\n";
        else {
            cout<< n-a[m-1]+1<< "\n"; 
        }
    }
}