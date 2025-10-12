#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,a,b;
        cin>> n>> a>> b;
        if (a <= b) {
            if (n%2 == b%2) cout<< "YES\n";
            else cout<< "NO\n";
        }
        else {
            if (n%2==a%2 && n%2==b%2) cout<< "YES\n";
            else cout<< "NO\n";
        }
    }
}