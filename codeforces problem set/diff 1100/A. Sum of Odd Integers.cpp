#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll t;
    cin>> t;
    while (t--) {
        ll n,k;
        cin>> n>> k;
        if ((n%2==0 && k%2==1) || n < k*k || (n%2==1 && k%2==0)) cout<< "NO\n";
        else cout<< "YES\n";
    }
}