#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    ll a[n];
    unordered_map<ll,ll> m;
    for (int i=0; i<n; i++) {
        cin>> a[i];
        m[a[i]]++;
    }

    sort(a,a+n);
    ll diff= a[n-1]-a[0];
    ll ans=0;
    if (n==2) ans=1;
    else if (diff == 0) ans = ((m[a[n-1]]-1)*n)/2;
    else ans = m[a[n-1]] * m[a[0]];

    cout<< diff<< " "<< ans;
}