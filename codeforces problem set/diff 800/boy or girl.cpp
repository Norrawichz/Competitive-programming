#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>> s;
    sort(s.begin(), s.end());
    char cur;
    int c=0;
    for (int i=0; i<s.size(); i++) {
        if (cur == s[i]) continue;
        cur = s[i];
        c++;
    }
    if (c % 2 == 0) cout<< "CHAT WITH HER!";
    else cout<< "IGNORE HIM!";
}