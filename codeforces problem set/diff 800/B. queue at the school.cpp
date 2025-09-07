#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n, t;
    cin>>n >> t;
    string s;
    cin >> s;
    while (t--) {
        string c =s;
        for (int i=0; i<n-1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(c[i], c[i+1]);
            }
        }
        s = c;
    }
    for (auto x : s) cout<< x;
}