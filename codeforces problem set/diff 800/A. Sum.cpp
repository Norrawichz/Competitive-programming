#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a, b, c;
        cin>> a>> b>> c;
        cout<< (a==b+c || b==a+c || c== a+b ? "YES\n" : "NO\n");
    }
}