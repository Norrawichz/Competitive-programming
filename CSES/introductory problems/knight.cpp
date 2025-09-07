#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    for (int k=1; k<=n; k++) {
        long long total = 1LL *k*k*(k*k-1) / 2;
        long long attack = (k >= 3) ? 4LL * (k-1) * (k-2) : 0;
        cout<< total - attack<< endl;
    }
}