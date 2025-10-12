#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ll n,m;
        cin>> n>> m;
 
        ll a[n], ans=0;
        for (int i=0; i<n; i++) cin>> a[i];
 
        sort(a,a+n);
        for (ll i=n-1; i>=0; i--) {
            ans+= a[i]*max((ll)0, m-(n-1-i));
        }
        cout<< ans<< "\n";
    }
}