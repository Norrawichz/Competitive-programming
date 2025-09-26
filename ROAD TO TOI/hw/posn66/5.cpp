#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    int a[26]={};
    for (int i=0; i<s.size(); i++) a[s[i]-'A']++;
    for (int i=0; i<26; i++) {
        if (a[i] == 1) {
            cout<< char(i+'A');
            return 0;
        }
    }

}