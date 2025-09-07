#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin>> m>> n;
    int count = 0;
    while (m > 0 && n > 0) {
        if (m < n) swap(m, n);
        count += m / n;
        m %= n;
    }
    cout<< count;
    return 0;
}