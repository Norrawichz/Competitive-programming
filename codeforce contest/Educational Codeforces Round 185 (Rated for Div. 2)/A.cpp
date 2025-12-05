#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        cout<< max({(n>=3?(n*n + n*n-1 + n*n-2 +n*n-1-n):0), (n*n+n*n-1+n*n-n), (n>=3 ? (n*n-1 + n*n-n + n*n-n-1 + n*n-n-2 + n*n-n-1-n): 0)})<< '\n';
    }
}