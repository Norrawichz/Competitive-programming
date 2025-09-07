#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, ans=1;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        int cur=a[0];
        for (int i=1; i<n; i++) {
            if (cur + 1 < a[i]) {
                ans++;
                cur = a[i];
            }
        }
        cout<< ans<<endl;
    }
}