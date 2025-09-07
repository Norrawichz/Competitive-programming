#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, k;
        cin>> n>> k;
        int a[n], cnt=1, ans = 0;
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) {
            if (a[i] == 0) {
                cnt=1;
                while (a[i] == 0 && cnt <= k) {
                    i++;
                    cnt++;
                }
                if (a[i] == 0 || cnt > k) ans++;
            }
        }
        cout<< ans<<endl;
    }
}