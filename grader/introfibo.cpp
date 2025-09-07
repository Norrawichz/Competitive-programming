#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n1 = 0, n2 = 1;
    int k;
    cin>> k;
    for (int i = 2; i<=k; i++) {
        long long x = n2;
        n2 = n1 + n2;
        n1 = x;
    }
    cout<< n2;
    return 0;
}