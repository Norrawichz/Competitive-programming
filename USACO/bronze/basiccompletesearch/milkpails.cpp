#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x,y,m;
    cin>> x>> y>> m;
    if (x > y) swap(x,y);

    int ans=0;
    for (int i=0; i<=m/x; i++) {
        int remain = m - x*i;
        int b=remain/y;
        ans = max(ans, i*x+b*y);
    }
    cout<< ans;
}