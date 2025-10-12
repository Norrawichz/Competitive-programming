#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string a;
        cin>> a;
        if ((a.size()<=2) || a[0] != '1' || a[1] != '0' || (a.size()==3 && a[2]-'0' < 2) || a[2] == '0') {
            cout<< "NO\n";
            continue;
        }
        else {
            cout<< "YES\n";
        }

    }
}