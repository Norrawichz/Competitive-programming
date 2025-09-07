#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    ll arr[n];
    for (int i=0; i<n; i++) cin>> arr[i];

    ll cur = -1e9;
    ll ans = -1e9;
    for (int i=0; i<n; i++) {
        cur = max(arr[i] + cur, arr[i]);
        ans = max(ans, cur);
    }
    cout<< ans;
}