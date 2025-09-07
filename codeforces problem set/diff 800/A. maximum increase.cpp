#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n, mx= 1;
    cin>> n;
    int a[n], cur=1;
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    for (int i=0; i<n-1; i++) {
        if (a[i] < a[i+1]) {
            cur++;
        }
        else {
            mx = max(mx, cur);
            cur = 1;
        }
    }
    mx = max(mx, cur);
    cout<< mx;
}