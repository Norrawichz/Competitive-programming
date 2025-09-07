#include <bits/stdc++.h>
using namespace std;

int n, ans = 0, col[15], d1[35], d2[35];

void bt(int r) {
    if (r >= n) {
        ans++;
        return;
    }
    for (int c= 0; c<n; c++) {
        if (col[c] || d1[r-c+n] || d2[r+c]) continue;
        col[c] = d1[r-c+n] = d2[r+c] = 1;
        bt(r+1);
        col[c] = d1[r-c+n] = d2[r+c] = 0;
    }
}
int main() {
    cin>>n;
    bt(0);
    cout<< ans;
}