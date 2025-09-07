#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin>> n;
        int a[n], sum = 0;
        for (int i=0; i<n; i++) cin>> a[i];
        cout<< min(2*a[0], a[0] + a[1]);
    }
}

// 2 5 0 2 3 4 5
// 7 0 0 0 0 0 0
// 2 2 0 0 0 0 0 

// 2 1 2

// 1 2 3 5 10 11 11 11
// 1 1 1 1 1 1 1 1
// 3 0 0 0 0 0 0 0
