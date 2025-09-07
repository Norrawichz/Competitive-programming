#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    string s;
    cin>> s;
    for (int i=0; i<=s.size()-1; i++) {
        if (s[i] == '.') cout<< 0;
        else if (s[i] == '-' && s[i+1] == '-') {
            cout<<2;
            i++;
        }
        else if (s[i] == '-' && s[i+1] == '.') {
            cout<<1;
            i++;
        }
    }
}