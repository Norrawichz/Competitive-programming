#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    
    vector<string> s(m);
    for (int i=0; i<m; i++) cin>> s[i];

    for (int i=1; i<m; i++) {
        int diff=0;
        for (int j=0; j<n; j++) {
            if (s[i][j] != s[i-1][j]) {
                diff++;
            }
            if (diff > 2) {
                cout<< s[i-1];
                return 0;
            }
        }
    }
    cout<< s[m-1];
}