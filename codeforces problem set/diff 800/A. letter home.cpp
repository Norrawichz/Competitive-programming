#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, s;
        cin>> n>> s;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        int ans = min(abs(s - a[0]), abs(s-a[n-1])) + a[n-1] - a[0];
        cout<< ans<< endl;
    }
}