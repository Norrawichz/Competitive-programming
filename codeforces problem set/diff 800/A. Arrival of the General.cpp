#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int mx=INT_MIN, mn=INT_MAX, im=-1, imn=-1;
    for (int i=0; i<n; i++) {
        int a; cin>> a;
        if (a > mx) {
            mx = a;
            im = i;
        }
        if (a < mn || (a == mn && imn<i)) {
            mn = a;
            imn = i;
        }
    }
    cout<< (im > imn ? im+(n-(imn+1))-1 : im+(n-(imn+1)));
}