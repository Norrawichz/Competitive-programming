#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a[5];
    for (int i=1; i<=4; i++) cin>> a[i];
    string s;
    cin>> s;
    int ans=0;
    for (auto x : s) ans += a[x-'0'];
    cout<< ans;
}