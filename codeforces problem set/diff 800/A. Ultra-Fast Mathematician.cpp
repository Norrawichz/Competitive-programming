#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, r;
    cin>> s>> r;
    for (int i=0; i<s.size(); i++) {
        if (s[i] != r[i]) cout<< 1;
        else cout<< 0;
    }
}