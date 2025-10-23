#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    int fab=-1, fba=-1, sab=-1, sba=-1;
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == 'A' && s[i+1] == 'B') {
            if (fab == -1) {
                fab=i;
            }
            sab=i;
        }

        if (s[i] == 'B' && s[i+1] == 'A') {
            if (fba == -1) {
                fba=i;
            }
            sba=i;
        }
    }
    if (fab != -1 && sba != -1 && abs(sba-fab) != 1) {
        cout<< "YES\n";
    }
    else if (fba != -1 && sab != -1 && abs(sab-fba) != 1) {
        cout<< "YES\n";
    }
    else cout<< "NO\n";
}