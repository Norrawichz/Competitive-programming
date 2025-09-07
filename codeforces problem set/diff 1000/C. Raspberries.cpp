#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,k, even=0;;
        cin>> n>> k;
        int mn = INT_MAX;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a %2==0) even++;
            mn = min(mn, (a%k == 0 ? 0 : k-a%k));
        }
        cout<< (k != 4 ? mn : min(mn, max(0, 2 - even)))<< endl;
    }
}