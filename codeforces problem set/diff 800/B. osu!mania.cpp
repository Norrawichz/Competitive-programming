#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) {
            string s;
            cin>> s;
            for (int j=0; j<4; j++) {
                if (s[j] == '#') {
                    a[n-i-1] = j+1;
                    break;
                }
            }
        }
        for (auto x : a) cout<< x<< " ";
        cout<< endl;
    }
}