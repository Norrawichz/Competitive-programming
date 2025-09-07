#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ll n;
        cin>> n;
        while (n%2==0) n/=2;
        cout<< (n!=1 ? "YES\n":"NO\n");
    }
}