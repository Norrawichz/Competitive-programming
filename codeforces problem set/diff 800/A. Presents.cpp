#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int ans[n];
    for (int i=1; i<=n; i++) {
        int a;
        cin>> a;
        ans[a-1]=i;
    }
    for (auto x : ans) cout<< x<< " ";
}