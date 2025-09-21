#include <bits/stdc++.h>
using namespace std;

int n,l,r, ans=0;

void rc(int n) {
    if (n < l+r) {
        ans++;
        return;
    }
    rc((n*l)/(l+r));
    rc((n*r)/(l+r));
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> l>> r;
    rc(n);
    cout<< ans;
}