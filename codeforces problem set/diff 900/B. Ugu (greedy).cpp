#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, a=0;
        cin>> n;
        string s;
        cin>> s;
        for (int i=0; i<n-1; i++) {
            if (s[i] != s[i+1]) a += 1;
        }
        cout<< (s[0] == '0' ? max(a-1,0) : a)<< endl;
    }
}