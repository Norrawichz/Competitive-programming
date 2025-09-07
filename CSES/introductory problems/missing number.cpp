#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>> n;
    bool vst[n+1] = {};
    for (int i=0; i<n; i++) {
        int x;
        cin>> x;
        vst[x] = true;
    }
    for (int i=1; i<=n; i++) {
        if (vst[i] == 0) {
            cout<< i;
            return 0;
        }
    }
}