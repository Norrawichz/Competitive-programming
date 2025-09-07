#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    cin>> n>> k;
    for (int i=1; i<=k; i++) {
        if (n % 10 == 0) n/=10;
        else n--;
    }
    cout<< n;
}