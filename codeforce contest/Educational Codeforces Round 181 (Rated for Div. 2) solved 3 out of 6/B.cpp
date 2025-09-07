#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

ll solve(ll a, ll b, ll k) {
    ll d = gcd(a, b);
    ll dx = a / d;
    ll dy = b / d;

    if (dx <= k && dy <= k) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll a, b, k;
        cin >> a >> b >> k;
        cout << solve(a, b, k) << '\n';
    }
}
