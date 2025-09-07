#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, x=0,y=0;
        bool ok=0;
        string s;
        cin>> n>>s;
        for (auto c : s) {
            if (c=='U') y++;
            else if (c=='D') y--;
            else if (c=='L') x--;
            else if (c=='R') x++;
            if (x==1 && y==1) {
                ok=1;
                break;
            }
        } 
        if (ok) cout<<"YES\n";
        else cout<< "NO\n";
    }
}