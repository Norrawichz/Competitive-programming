#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;

        int c[2]={};
        for (int i=0; i<s.size(); i++) (s[i]=='0' ? c[0]++ : c[1]++);

        for (int i=0; i<=s.size(); i++) {
            if (i==s.size() || c[1-(s[i]-'0')]==0) {
                cout<< s.size()-i<<"\n";
                break;
            }
            if (s[i]=='0') {
                c[1-(s[i]-'0')]--;
            }
            else if (s[i]=='1') {
                c[1-(s[i]-'0')]--;
            }
        }
    }
}