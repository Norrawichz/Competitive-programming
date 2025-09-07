#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, x, ans=0;
        cin>> n>> x;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        reverse(a, a+n);
        for (int i=0, cnt = 1; i<n; i++, cnt++) {
            if (a[i]*cnt >= x) {
                ans++;
                cnt = 0;
            }
        }
        cout<< ans<<endl;
    }
}