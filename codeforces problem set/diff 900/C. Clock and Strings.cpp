#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>> t;
    while (t--) {
        int a,b,c,d;
        cin>> a>> b>> c>> d;

        bool ok=0;
        
        if (max(a,b) > c && min(a,b) < c && ((max(a,b) > d && min(a,b) > d) || (max(a,b) < d && min(a,b)<d))) ok=1;
        else if (max(a,b) > d && min(a,b) < d && ((max(a,b) > c && min(a,b) > c) || (max(a,b) < c && min(a,b)<c))) ok=1;
        else if (max(c,d) > a && min(c,d) < a && ((max(c,d) > b && min(c,d) > b) || (max(c,d) < b && min(c,d)<b))) ok=1;
        else if (max(c,d) > b && min(c,d) < b && ((max(c,d) > a && min(c,d) > a) || (max(c,d) < a && min(c,d)<a))) ok=1;

        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}