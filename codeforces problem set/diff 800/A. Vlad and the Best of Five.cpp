#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        int c[2]={};
        for (auto x : s) c[x-'A']++;
        if (c[0] > c[1]) cout<< "A\n";
        else cout<< "B\n";
    }
}