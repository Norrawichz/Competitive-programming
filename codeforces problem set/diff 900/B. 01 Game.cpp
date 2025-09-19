#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        int odd = 0, even=0;
        for (auto x : s) {
            if (x%2==0) even++;
            else odd++;
        }
        if (min(odd, even) % 2 == 1) cout<< "DA\n";
        else cout<< "NET\n";
    }
}