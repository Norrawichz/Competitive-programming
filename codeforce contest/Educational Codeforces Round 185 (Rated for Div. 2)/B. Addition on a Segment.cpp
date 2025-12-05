#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin>> a[i];

        sort(a.rbegin(), a.rend());
        int st=0;
        for (int i=1; i<n; i++) {
            if (a[i] == 0) {

                break;
            }
            a[i]+=a[i-1];
            st=i;
        }

        int ans=0;
        for (int i=st, k=0; i>=0; i--, k++) {
            if (k==0) {
                if (a[i]-i >= n) {
                    ans = i+1;
                    break;
                }
            }
            else {
                if (a[i]-i+a[st]-a[st-k] >=n ) {
                    ans = i+1;
                    break;
                }
            }
        }
        cout<< ans<<'\n';
    }
}