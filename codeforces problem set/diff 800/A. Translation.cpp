#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, t;
    cin>> s>> t;
    bool valid = 1;
    if (s.size() != t.size()) {
        cout<< "NO";
        return 0;
    }
    for (int i=0; i<s.size(); i++) {
        if (s[i] != t[s.size()-i-1]) {
            valid = 0;
            break;
        }
    }
    if (valid) cout<< "YES";
    else cout<< "NO";
}