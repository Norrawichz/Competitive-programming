#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        string s;
        cin>> n>> k>> s;

        int cnt1=0, cnt0=0, cnt2=0;
        for (int i=0; i<k; i++) {
            if (s[i] =='0') cnt0++;
            else if (s[i]=='1') cnt1++;
            else cnt2++;
        }

        for (int i=1; i<=n; i++) {
            if (i>cnt0+cnt2 && (n-i+1)>cnt1+cnt2) cout<< "+";
            else if (i<=cnt0 || (n-i+1)<=cnt1 || n-cnt0-cnt1 <= cnt2) cout<< "-";
            else cout<< "?";
        }
        cout<< "\n";
    }   
}