#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];

    for (int i=1; i<n; i++) {
        if (abs(a[i-1] - a[i]) <= 1) {
            cout<< 0<< endl;
            return;
        }
    }

    for (int i=1; i<n-1; i++) {
        if (a[i-1] < a[i] && a[i] > a[i+1]) {
            cout<< 1<< endl;
            return;
        }
        if (a[i-1] > a[i] && a[i] < a[i+1]) {
            cout<< 1<< endl;
            return;
        }
    }
    cout<< -1<< endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        solve();
    }
}