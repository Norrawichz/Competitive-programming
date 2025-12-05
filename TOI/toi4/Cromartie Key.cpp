#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int l,k;
    cin>> l>> k;

    string a,b,c;
    cin>> a>> b>> c;

    for (int i=0; i<k; i++) {
        for (int j=0; j<l; j++) {
            char s[3] = {a[j], c[i], b[j]};
            sort(s, s+3);
            c[i]=s[1];
        } 
    }
    cout<< c;
}