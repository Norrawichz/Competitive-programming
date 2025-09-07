#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll count_good(ll x) {
    ll total = x;

    ll c2 = x / 2;
    ll c3 = x / 3;
    ll c5 = x / 5;
    ll c7 = x / 7;

    ll c23 = x / 6;
    ll c25 = x / 10;
    ll c27 = x / 14;
    ll c35 = x / 15;
    ll c37 = x / 21;
    ll c57 = x / 35;

    ll c235 = x / 30;
    ll c237 = x / 42;
    ll c257 = x / 70;
    ll c357 = x / 105;

    ll c2357 = x / 210;

    ll bad = c2 + c3 + c5 + c7
           - c23 - c25 - c27 - c35 - c37 - c57
           + c235 + c237 + c257 + c357
           - c2357;

    return total - bad;
}
using int = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_good(r) - count_good(l - 1) << '\n';
    }
}
