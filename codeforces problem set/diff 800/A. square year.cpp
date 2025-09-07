#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        int n = (s[0]-'0') * 1000 + (s[1] -'0') * 100 + (s[2]-'0') * 10 + (s[3]-'0');
        int l=0, r=n;
        bool f=0;
        while (l <= r) {
            int mid = (l+r) / 2;
            if (1LL * mid*mid == n) {
                f=1;
                cout<< 0<< " "<< mid<< endl;
                break;
            }
            else if (1LL *mid*mid > n) r = mid-1;
            else if (1LL *mid*mid < n) l=mid+1;
        }
        if (!f) cout<< -1<< endl;
    }
}