#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>> n>> m;
    for (int i = min(n,m); i>0; i--) {
        if (n%i == 0 && m%i == 0) {
            cout<< i;
            return 0;
        }
    }
    return 0;
}