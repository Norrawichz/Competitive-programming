#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        ll ans = 0;
        for (int i=0; i<n; i++) {
            ll a,b,c,d;
            cin>> a>> b>> c>> d;
            if (b <= d) {
                ans += (a-c >= 0 ? a-c : 0);
            }
            else {
                ans += a;
                ans += (b-d >= 0 ? b-d : 0);
            }
        }
        cout<< ans<< endl;
    }
}