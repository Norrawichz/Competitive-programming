#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sx=0, sy=0, sz=0;
    cin>> n;
    while (n--) {
        int x,y,z;
        cin>>x>>y>>z;
        sx += x;
        sy += y;
        sz += z;
    }
    if (sx == 0 && sy == 0 && sz == 0) cout<< "YES";
    else cout<< "NO";
}