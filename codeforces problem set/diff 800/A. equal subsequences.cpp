#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, k;
        cin>> n>> k;
        for (int i=0; i<n-k; i++) cout<< 0;
        for (int i=0; i<k; i++) cout<< 1;
        cout<< endl;
    }
}