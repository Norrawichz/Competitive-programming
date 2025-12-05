#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>> t;
    while (t--) {
        double a,b,n;
        cin>> a>> b>> n;

        int ans;
        if (a/n >= b || a==b) ans=1;
        else ans=2;
        cout<< ans<<'\n';
    }
}