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
        int fi=0, la=n-1;
        while (true) {
            if (s[fi] == 'B') break;
            fi++;
        }
        while (true) {
            if (s[la] == 'B') break;
            la--;
        }
        cout<< 1+la-fi<<endl;

    }
}