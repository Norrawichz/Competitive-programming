#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b,c,d;
        cin>> a>> b>> c>> d;
        if (a==b && a==c && a==d) cout<< "YES\n";
        else cout<< "NO\n";
    }
}