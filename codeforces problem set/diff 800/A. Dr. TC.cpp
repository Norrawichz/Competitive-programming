#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s;
        cin>> n>> s;
        int cn1=0, ans=0;
        for (int i=0; i<n; i++) if (s[i] == '1') cn1++;
        for (int i=0; i<n; i++) {
            if (s[i]=='0') ans+= cn1+1;
            else ans += cn1-1;
        }
        cout<< ans<< endl;
    }
}