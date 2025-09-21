#include <bits/stdc++.h>
using namespace std;

int fimul(int n) {
    if (n == 3) return -2;
    else if (n == 2) return -2;
    else if (n == 1) return 7;
    return fimul(n-2)*3 + fimul(n-3)*4;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    cout<< fimul(n);
}