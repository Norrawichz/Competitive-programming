#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>> n;
    ll s[n];
    for (int i=0; i<n; i++) cin>>s[i];
    sort(s, s+n);

    ll median = s[n/2];
    ll mn = 0;
    for (int i=0; i<n; i++) {
        mn += abs(s[i] - median);
    }

    cout<< mn;
}