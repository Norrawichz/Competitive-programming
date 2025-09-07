#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x=0;
    cin>> n;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        if (s[0] == '+' || s[1] == '+' || s[2] == '+') x++;
        else x--;
    }
    cout<< x;
}