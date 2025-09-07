#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s;
        cin>> n>> s;
        int mx=0;
        for (auto x : s) mx=max(mx, x-'a');
        cout<< mx+1<<endl;
    }
}