#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int sm1=(1<<n), sm2=0;
        for (int i=1; i<n/2; i++) {
            sm1+=(1<<i);
        }
        for (int i=n/2; i<n; i++) {
            sm2+=(1<<i);
        }
        cout<< sm1-sm2<< "\n";
    }
}