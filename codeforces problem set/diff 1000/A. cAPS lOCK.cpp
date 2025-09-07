#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    int cnt=0;
    for (auto x : s) if (x <'a') cnt++;
    
    if (cnt==s.size()-1 && s[0]>='a') {
        s[0] = toupper(s[0]);
        cout<< s[0];
        for (int i=1; i<s.size(); i++) {
            s[i] = tolower(s[i]);
            cout<< s[i];
        }
    }
    else if (cnt == s.size()) {
        for (int i=0; i<s.size(); i++) {
            s[i] = tolower(s[i]);
            cout<< s[i];
        }
    }
    else cout<< s;
}