#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while (t--) {
        int n,s, ans = 0;
        cin>> n>>s;
        for (int i=0; i<n; i++) {
            int dx, dy, x, y;
            cin>> dx>> dy>> x>> y;
            if (dx == dy) ans += (x == y);
            else ans += (x + y == s);
        }
        cout<< ans<< endl;
    }
}