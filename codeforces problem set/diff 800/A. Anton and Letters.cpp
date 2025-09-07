#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    getline(cin, s);
    set<char> e;
    for (auto x : s) {
        if (x != ' ' && x != '{' && x != '}' && x != ',') e.insert(x);
    }
    cout<< e.size();
}