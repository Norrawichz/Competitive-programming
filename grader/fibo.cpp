#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>> n;
    if (n == 0) {
        cout<< 0;
        return 0;
    }
    else if (n == 1) {
        cout<< "0, 1";
        return 0;
    }
    ll n1 = 0, n2 = 1;
    cout<< n1<<", "<< n2;
    for (int i = 2; i<=n; i++) {
        ll x = n2;
        n2 += n1;
        n1 = x;
        cout<< ", "<< n2;
    }


    return 0;
}