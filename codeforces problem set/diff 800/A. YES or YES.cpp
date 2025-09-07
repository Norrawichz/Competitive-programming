#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        char c1=tolower(s[0]),c2=tolower(s[1]),c3=tolower(s[2]);
        if (c1 == 'y' && c2 == 'e' && c3 == 's') cout<< "YES\n";
        else cout<< "NO\n";
    }
}