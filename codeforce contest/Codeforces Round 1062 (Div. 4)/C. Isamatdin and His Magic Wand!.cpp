#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        int odd=0, even=0;
        for (int i=0; i<n; i++) {
            if (a[i] % 2== 0) even++; 
            else odd++;
        }
        if (odd != 0 && even != 0) {
            sort(a,a+n);
        }
        for (int i=0; i<n; i++) cout<< a[i]<< " ";
        cout<< '\n';
    }
}