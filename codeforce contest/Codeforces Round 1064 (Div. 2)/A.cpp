#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n;
        string s;
        cin>> n>> s;

        int same=0;
        for (int i=0; i<n-1; i++) {
            if (s[i] == s[n-1]) same++;
        }

        cout<< n-1-same<<'\n';
    }
}