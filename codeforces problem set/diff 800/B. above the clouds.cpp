#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        char s[n];
        map<char,int> m;
        for (int i=0; i<n; i++) {
            cin>> s[i];
            m[s[i]]++;
        }
        bool found = 0;
        for (int i=1; i<n-1; i++) {
            if (m[s[i]] >= 2) {
                found = 1;
                break;
            }
        }
        if (found) cout<< "YES"<< endl;
        else cout<< "NO"<< endl;
    }
}