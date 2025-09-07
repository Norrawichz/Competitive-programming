#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int a[n], mx=-1;
    for (int i=0; i<n; i++) {
        cin>> a[i];
        mx=max(mx,a[i]);
    }
    int ans=0;
    for (auto x:a) ans+=mx-x;
    cout<< ans;
}