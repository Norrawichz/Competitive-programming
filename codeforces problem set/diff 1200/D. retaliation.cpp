#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        int d=a[1] - a[0];
        bool valid = 1;
        for (int i=2; i<n; i++) {
            if (d != a[i] - a[i-1]) {
                valid = 0;
                break;
            }
        }
        if (!valid) {
            cout<< "NO"<< endl;
            continue;
        }

        for (int i=0; i<n; i++) {
            a[i] = a[i] + (d < 0 ? d*(n-i) : -d * (i+1));
        }
        cout<< (a[0] >= 0 && a[0] % (n+1) == 0 ? "YES" : "NO")<< endl;
        
    }
}