#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n;
    cin>> n;
    double s=0;
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        s += a;
    }
    cout<< s/n;
}