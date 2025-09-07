#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        string s;
        int n, c=0, k;
        cin>> n>> k>> s;
        for (auto x : s) {
            if (x == '1') c++;
        }
        cout<< (c <= k || n < 2*k ? "Alice" : "Bob")<< endl; 
    }
}