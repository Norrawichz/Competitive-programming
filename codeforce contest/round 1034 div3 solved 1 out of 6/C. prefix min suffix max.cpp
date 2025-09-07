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
        vector<int> a(n+1), p(n+1, INT_MAX), s(n+2);
        for (int i=1; i<=n; i++) {
            cin>> a[i];
            p[i] = min(p[i-1], a[i]);
        }
        for (int i=n; i>= 1; i--) {
            s[i] = max(s[i+1], a[i]);
        }
        for (int i=1; i<=n; i++) {
            cout<< (a[i] == p[i] || a[i] == s[i] ? 1 : 0); 
        }
        cout<< endl;
    }

}