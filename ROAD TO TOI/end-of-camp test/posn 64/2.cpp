#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin>> n;
    if (n==1 || n==2) {
        cout<< 1;
        return 0;
    }
    
    ll n1=1,n2=1;
    for (int i=3; i<=n; i++) {
        ll tem=n2;
        n2=n1+n2;
        n1=tem;
    }
    cout<< n2;
}