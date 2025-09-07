#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        if (s.size() % 2 != 0) {
            cout<< "NO\n";
            continue;
        }
        bool valid=1;
        for (int i=0; i<s.size()/2; i++) {
            if (s[i] != s[i+s.size()/2]) {
                valid = 0;
                break;
            }
        }
        if (valid) cout<< "YES\n";
        else cout<< "NO\n";
    }
}