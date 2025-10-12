#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;
    cin>> n;

    ll v[n], u[n];
    for (int i=0; i<n; i++) {
        cin>> v[i];
        u[i]=v[i];
    } 

    cin>> m;
    sort(u, u+n);
    for (int i=1; i<n; i++) v[i]+=v[i-1];
    for (int i=1; i<n; i++) u[i]+=u[i-1];

    for (int i=0; i<m; i++) {
        int t,r,n;
        cin>> t>> r>> n;
        n--;
        r--;
        if (t==2) cout<< u[n]-(r-1 < 0 ? 0 : u[r-1])<< "\n";
        else cout<< v[n]-(r-1 < 0 ? 0 : v[r-1])<< "\n";
    }
    

}