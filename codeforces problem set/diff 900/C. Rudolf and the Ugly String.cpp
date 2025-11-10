#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        string s;
        cin>> s;

        int ans=0;
        for (int i=0; i<n-2; i++) {
            if (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') ans++;
            else if (i < n-3 && s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i') {ans++;i+=3;}
            else if (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') ans++;
        }
        cout<< ans<< '\n';
    }
}