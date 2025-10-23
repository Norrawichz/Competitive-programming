#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ll n,k;
        cin>> n>> k;

        bool valid=0;
        for (int x=0; x<=1; x++) {
            if (n-x*k >= 0 && (n-x*k)%2==0) {
                valid=1;
                break;
            }
        }
        if (valid) cout<< "YES\n";
        else cout<< "NO\n";
    }
}