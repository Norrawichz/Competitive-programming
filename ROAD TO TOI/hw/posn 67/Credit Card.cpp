#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    int a[15];
    for (int i=0; i<15; i++) {
        a[i] = s[14-i]-'0';
    }
    for (int i=0; i<15; i+=2) {
        a[i] *= 2;
    }
    int sm=0;
    for (int i=0; i<15; i++) {
        sm+=a[i]/10 + a[i]%10;
    }
    if ((10-sm%10)%10 == s[15]-'0') cout<< "yes";
    else cout<< "no";
}