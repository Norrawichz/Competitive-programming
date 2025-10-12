#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int x,y,z;
        cin>> x>> y>> z;
        if (((x&y) | (y&z) | (z&x)) & ~(x&y&z)) cout<< "NO\n";
        else cout<< "YES\n";
    }
}