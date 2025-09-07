#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        bool c[26]={}, valid=1;
        string s;
        cin>> s;

        for (int i=0; i<n; i++) {
            if (c[s[i]-'A']==0) {
                c[s[i]-'A']=1;
                char tmp=s[i];
                while (s[i]==tmp) i++;
                i--;
            }
            else {
                valid = 0;
                break;
            }
        }
        if (valid) cout<< "YES\n";
        else cout<< "NO\n";
    }
}