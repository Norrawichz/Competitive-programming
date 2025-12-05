#include <bits/stdc++.h>
using namespace std;

int recur(int n, int st) {
    if (n==0) return 1;
    if (n<0) return 0;

    int sm=0;
    if (st==1) sm+= recur(n-4, st);
    else sm+=recur(n-2, st)+recur(n, 1);

    return sm;
}       

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        cout<< recur(n, 0)<<'\n';
    }
}