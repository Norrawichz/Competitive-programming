#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    string s;
    cin>> s;

    int ans=0, cur=0, cons=0;

    while (cur < n) {
        if (s[cur++] == 'x') {
            cons++;
        }
        else {
            ans += (cons-2 < 0 ? 0:cons-2);
            cons=0;
        }
    }
    ans += (cons-2 < 0 ? 0:cons-2);
    cout<< ans;
}