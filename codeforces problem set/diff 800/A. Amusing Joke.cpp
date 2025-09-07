#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string n,m,s;
    cin>> n>> m>> s;
    string e=n+m;
    sort(e.begin(), e.end());
    sort(s.begin(), s.end());
    if (e.size() != s.size()) {
        cout<< "NO";
        return 0;
    }
    for (int i=0; i<e.size(); i++) {
        if (e[i] != s[i]) {
            cout<< "NO";
            return 0;
        }
    }
    cout<< "YES";
}