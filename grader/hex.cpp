#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    if (n == 1) {
        cout<< 1;
        return 0;
    }
    ll sum = 4ll * ((n-1ll)* n/2 - 1) + (n-2);
    cout<< sum + 6;
    return 0;
}