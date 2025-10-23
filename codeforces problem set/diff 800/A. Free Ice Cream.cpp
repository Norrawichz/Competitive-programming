#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,x;
    cin>> n>> x;

    int ans=0;
    for (int i=0; i<n; i++) {
        char c;
        int d;
        cin>> c>> d;
        if (c=='+') x+=d;
        else {
            if (x < d) ans++;
            else x-=d;
        }
    }
    cout<< x<< " "<<ans<<"\n";
}