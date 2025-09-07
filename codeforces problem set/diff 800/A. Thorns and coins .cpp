#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, coin=0;
        cin>> n;
        string s;
        cin>> s;
        bool t=1;
        for (int i=0; i<n; i++) {
            if (s[i] == '@') {
                coin++;
            }
            if (s[i+1] == '*' && s[i+2] == '*') {
                cout<< coin<< endl;
                t=0;
                break;
            }
        }
        if (t) cout<< coin<< endl;

    }
}