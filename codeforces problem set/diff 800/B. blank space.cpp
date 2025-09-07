#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int cur = 0, mx = 0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a==0) {
                cur++;
            }
            else {
                mx = max(mx, cur);
                cur = 0;
            }
        }
        mx = max(mx, cur);
        cout<< mx<< endl;
    }
}