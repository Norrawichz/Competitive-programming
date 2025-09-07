#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin>> n>> s;
    bool a[26]={};
    for (auto x : s) {
        char c = tolower(x);
        a[c-'a'] = 1;
    }
    for (auto x : a) {
        if (!x) {
            cout<< "NO";
            return 0;
        }
    }
    cout<< "YES";
}