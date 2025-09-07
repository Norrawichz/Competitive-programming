#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int n,l,r, ans=0;
    cin>> n>> l>> r;
    for (int i=0; i<n; i++) {
        int a,b;
        cin>> a>> b;
        if (a <= l && b >= r) ans++;
    }
    cout<< ans;
}