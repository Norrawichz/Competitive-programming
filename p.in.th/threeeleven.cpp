#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>> s;
    int e = 0;
    for (int i = 0; i < s.size(); i++) {
        e += s[i]-'0';
    }
    cout<< e % 3<< " ";
    int el = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i += 2) {
        el += (s[i]-'0');
        if (i + 1 <= s.size() - 1) {
            el += ((s[i+1]-'0') * 10);
        }
    }
    cout<< el % 11;
    return 0;
}