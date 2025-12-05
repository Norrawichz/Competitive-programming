#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;

        string s;
        cin>> s;

        int prf[n] = {};
        prf[0] = (s[0] == 'W' ? 1:0);
        for (int i=1; i<n; i++) {
            prf[i] = (s[i] == 'W' ? 1:0) + prf[i-1];
        }

        int mn=INT_MAX;
        for (int i=k-1; i<n; i++) {
            mn = min(mn, prf[i] - (i==k-1? 0 :prf[i-(k-1)-1]));
        }
        cout<< mn<< '\n';
    }
}