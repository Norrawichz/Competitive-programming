#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    bool y=0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && y && (i+2 < s.size()-1)) cout<< " ";
        while (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            i+=3;
        }
        if (i >= s.size())break;
        cout<< s[i];
        y=1;
    }
}