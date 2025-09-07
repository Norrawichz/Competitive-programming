#include <bits/stdc++.h>
using namespace std;

bool ch(int n, int m) {
    if (n == m) return 1;
    else if (n%3 != 0) return 0;
    else {return (ch(n/3, m)) || (ch(2 * n/3, m));}
}
int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, m;
        cin>> n>> m;
        cout<< (ch(n,m) ? "YES" : "NO")<< "\n";
    }
}