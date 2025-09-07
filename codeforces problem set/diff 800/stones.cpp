#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    cin>> n;
    if (n == 1) {
        cout<< 0;
        return 0;
    }
    char c[n];
    for (int i=0; i<n; i++) cin>> c[i];
    char cur = c[0];
    for (int i=1; i<n; i++) {
        if (cur == c[i]) count++;
        else cur = c[i];
    }
    cout<< count;
}