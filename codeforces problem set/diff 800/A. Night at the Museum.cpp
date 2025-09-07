#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int ans=0;
    cin>> s;
    char cur='a';
    for (auto x : s) {
        ans += min({1 + abs(cur-'z') + abs(x-'a'), 1 + abs(cur-'a') + abs('z'-x), abs(cur-x)});
        cur = x;
    }
    cout<< ans;
}