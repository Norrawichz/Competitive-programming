#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b,c,d;
        cin>> a>> b>> c>> d;
        c-=a;
        d-=b;
        if (a > b) swap(a,b);
        if (c > d) swap(c,d);
        
        if (a < (b+1)/2-1 || c < (d+1)/2-1) cout<< "NO\n";
        else cout<< "YES\n";
    }
}