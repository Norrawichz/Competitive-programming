#include <bits/stdc++.h>
using namespace std;

int n;

void find(string s) {
    if (s.size() == n) {
        if (s[0] == 'B' || s[s.size()-1]=='B') {
            return;
        }

        for (int i=1; i<s.size()-1; i++) {
            if (s[i] == 'B' && (s[i-1] != 'A' || s[i+1] != 'A')) {
                return;
            }
        }
        cout<< s<<"\n";
        return;
    }

    for (char i='A'; i<='B'; i++) {
        find(s+i);
    }
}

int main() {
    cin>> n;
    string s="";
    find(s);
}