#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;

        for (char i='1'; i<='8'; i++) {
            if (i==s[1]) continue;
            cout<< s[0]<<i<<"\n";
        }
        for (char i='a'; i<='h'; i++) {
            if (i==s[0]) continue;
            cout<< i<<s[1]<<"\n";
        }
    }
}