#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b,c,n;
        cin>> a>> b>> c>> n;
        int mx = max({a,b,c});
        int sm=mx-a + mx-b + mx-c;
        n-=sm;
        if (n%3 == 0 && n>=0) cout<< "YES\n";
        else cout<< "NO\n";
    }
}