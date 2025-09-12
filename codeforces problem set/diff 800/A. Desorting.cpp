#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        bool pass=0;
        for (int i=1; i<n; i++) {
            if (a[i] < a[i-1]) {
                pass=1;
                break;
            }
        }
        if (pass) {
            cout<< 0<<endl;
            continue;
        }

        int ans=INT_MAX;
        for (int i=1; i<n; i++) {
            ans = min(ans, a[i]-a[i-1]);
        }
        cout<< ans/2 + 1<<endl;
    }
}