#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    string t="";
    string tem="ABCD";
    for (int i=0; i<s.size(); i++) {
        for (auto x : tem) {
            if (s[0] == x) continue;
            if (i>0 && t[t.size()-1] == x) continue;
            t+=x;
            break;
        }
    }
    cout<< t;
}