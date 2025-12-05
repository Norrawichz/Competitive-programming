#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int left=2;
        string s="";
        while (n >= 26+left) {
            n-=26;
            s = char('a'+25)+s;
            left--;
        }
        if (left > -1) {
            s = char('a'+n-1-left) + s;
            left--;
        }
        while (left > -1) {
            left--;
            s = 'a' + s;
        }
        cout<< s<< '\n';
    }
}