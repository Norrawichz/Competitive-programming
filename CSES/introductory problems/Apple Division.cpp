#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, p[25], ans=LONG_LONG_MAX, sm=0;

void bt(ll i,ll cur) {
    if (i==n) {
        ans=min(ans, abs(2*cur - sm));
        return;
    }
    bt(i+1, cur+p[i+1]);
    bt(i+1, cur);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;
    for (int i=0; i<n; i++) {
        cin>> p[i];
        sm+=p[i];
    }
    bt(-1,0);
    cout<< ans;

}