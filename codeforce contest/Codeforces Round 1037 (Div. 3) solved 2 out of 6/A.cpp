#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        string n;
        cin>> n;
        int mn=100;
        for (auto x : n) mn = min(mn, x-'0');
        cout<< mn<< endl;
    }
}