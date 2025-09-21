#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    for (int i=0; i<s.size(); i++) {
        if (s[i] != 1 && s[i] != 4) {
            cout<< "NO";
            return 0;
        }
    }
    if (s.find("444") != s.npos || s[0] == '4') {
        cout<< "NO";
        return 0;
    }
    cout<< "YES";
}