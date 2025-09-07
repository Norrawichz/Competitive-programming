#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>> n>> k;
    int c =0;
    if (n % 2 == 0) {
        if (k <= n/2) c = 1 + (k-1)*2;
        else c = 2 + (k-n/2-1)*2;
    }
    else {
        if (k <= n/2+1) c = 1 + (k-1)*2;
        else c = 2 + (k-(n/2+1)-1)*2;
    }
    cout<< c;

}