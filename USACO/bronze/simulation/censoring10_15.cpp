#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string s,t;
    cin>> s>> t;
    while (true) {
        string ne="", tem="";
        bool found=0;
        int l=0, r=0;

        while (l<s.size() && r<s.size()) {
            tem+=s[r];
            if (r-l+1 == t.size()) {
                if (tem == t) {
                    l=r+1;
                    tem="";
                    found=1;
                }
                else {
                    ne+=s[l];
                    tem.erase(tem.begin());
                    l++;
                }
            }
            r++;
        }
        while (l<s.size()) {
            ne+=s[l];
            l++;
        }
        s=ne;
        if (!found) break; 
    }
    cout<< s;
}