#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, k;
        cin>> n>> k;
        cout<< (n-1)*k + 1<< endl;
    }
}