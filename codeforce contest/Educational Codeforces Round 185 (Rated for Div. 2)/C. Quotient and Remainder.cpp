#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;

        vector<int> q(n), R(n);
        for (int i=0; i<n; i++) cin>> q[i];
        for (int i=0; i<n; i++) cin>> R[i];

        sort(q.begin(), q.end());
        sort(R.rbegin(), R.rend());

        int rr=0, ans=0;
        for (int i=0; i<n; i++) {
            int ymx = k/q[i];

            int l=1,r=ymx;
            while (l<=r) {
                int mid=l+(r-l)/2;
                if (mid*q[i]+mid-1 <= k) l = mid+1;
                else r = mid-1;
            }
            int mxr=l-2;
            //cout<< l<< ' '<< r<<'\n';
            while (rr < n && mxr < R[rr]) rr++;
            if (rr++ < n) ans++;
            if (rr >= n) break;
        }
        cout<< ans<<'\n';
    }
}