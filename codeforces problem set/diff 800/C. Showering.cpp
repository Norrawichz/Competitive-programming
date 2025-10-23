#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,s,m;
        cin>> n>> s>> m;

        bool valid=0;
        int cur=0;
        for (int i=0; i<n; i++) {
            int l,r;
            cin>> l>> r;
            if (l-cur >= s) valid=1;
            cur=r;
        }
        if (m-cur >= s) valid=1;
        
        if (valid) cout<< "YES\n";
        else cout<< "NO\n";
    }
}