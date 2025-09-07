#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        string s;
        cin>> s;
        int f0=0,f1=0;
        for (auto x : s) {
            if (x == '0') f0++;
            else f1++;
        }
        int e=(max(f1, f0) - min(f1, f0))/2;
        if (k >= e && (k-e) % 2 == 0) cout<< "YES\n";
        else cout<< "NO\n";
    }
}