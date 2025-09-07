#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie()->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b,c;
        cin>> a>> b>> c;
        a+=c-(c/2);
        b+=c/2;
        if (a<=b) cout<< "Second\n";
        else cout<< "First\n";
    }
}