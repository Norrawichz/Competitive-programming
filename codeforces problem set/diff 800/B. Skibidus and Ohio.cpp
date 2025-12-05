#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;

        bool ok=false;
        for (int i=0; i<s.size()-1; i++) {
            if (s[i] == s[i+1]) {
                ok=true;
                break;
            }
        }

        if (ok) cout<< 1<< '\n';
        else cout<< s.size()<< '\n';

    }
}