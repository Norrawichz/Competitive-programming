#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a, n;
        cin>> a;
        if (360 % (180 - a) == 0) cout<< "YES\n";
        else cout<< "NO\n";
    }
}
