#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int m,n,k;
    cin>> m>> n>> k;
    vector<string> s(m);
    for (int i=0; i<m; i++) cin>> s[i];
    for (int r=0; r<m; r++) {
        string tem="";
        for (int j=0; j<n; j++) for (int e=0; e<k; e++) tem+=s[r][j];
        for (int i=0; i<k; i++) cout<< tem<<endl;
    }
}