#include <bits/stdc++.h>
using namespace std;
#define ll long long

int recur() {

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<ll> a(n);
        for (int i=0; i<n; i++) cin>> a[i];
        
        ll cur=0, sm=0;
        while (cur<n) {
            ll mx=LLONG_MIN;
            while (cur+1 < n && a[cur+1] < 0 == a[cur] < 0) {
                if (mx < a[cur]) mx=a[cur];
                cur++;
            }
            if (mx < a[cur]) mx=a[cur];
            sm+=mx;
            cur++;
        }
        cout<< sm<<'\n';
    }
}