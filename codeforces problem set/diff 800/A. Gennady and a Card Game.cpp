#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;
    
    string d[5];
    for (int i=0; i<5; i++) cin>> d[i];

    for (int i=0; i<5; i++) {
        if (d[i][0] == s[0] || d[i][1]==s[1]) {
            cout<< "YES\n";
            return 0;
        }
    }
    cout<< "NO\n";
}