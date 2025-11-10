#include <bits/stdc++.h>
using namespace std;

int recur(int cur) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    int sm=0;
    for (int i=1; i<=cur; i++) sm += recur(cur-i);
    return sm;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n;
        cin>> n;
        n*=2;
        cout<< recur(n);
    }
}