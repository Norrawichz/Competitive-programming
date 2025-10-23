#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        if (b%2==1 && a >= 2) {
            a-=2;
            b--;
        }

        if (a%2==0 && b%2==0) cout<< "YES\n";
        else cout<< "NO\n";
    }
}
