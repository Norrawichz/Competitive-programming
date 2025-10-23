#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie()->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        int sm=0;
        for (int i=0; i<n; i++) {   
            if (a[i] < 0) sm += -1 * a[i];
            else sm += a[i];
        }
        cout<< sm<< "\n";
    }
}