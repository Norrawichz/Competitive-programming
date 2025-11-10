#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin>> q;
    while (q--) {
        int n;
        string s, t;
        cin>> n>> s>> t;

        sort(s.begin(),s.end());
        sort(t.begin(), t.end());

        bool ok=1;
        for (int i=0; i<n; i++) {
            if (s[i] != t[i]) {
                ok=0;
                break;
            }
        }
        if (ok) cout<< "YES\n";
        else cout<< "NO\n";
    }
}