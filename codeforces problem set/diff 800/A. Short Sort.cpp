#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        if (s[1] == 'b' || (s[1]=='a' && s[2]=='c') || (s[1]=='c' && s[0]=='a')) cout<< "YES\n";
        else cout<< "NO\n";
    }
}