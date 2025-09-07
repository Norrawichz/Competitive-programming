#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, mi=0, ch=0;
    cin>> n;
    for (int i=0; i<n; i++) {
        int m,c;
        cin>> m>> c;
        if (m>c) mi++;
        else if (c>m) ch++;
    }
    if (mi==ch) cout<<"Friendship is magic!^^";
    else if (mi > ch) cout<<"Mishka";
    else cout<<"Chris";
}