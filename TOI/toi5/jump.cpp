#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>> n>> k;

    vector<int> prf(60001, 0);
    vector<int> st(n);
    for (int i=0; i<n; i++) {
        cin>> st[i];
        prf[st[i]]++;
    }

    for (int i=1; i<60001; i++) {
        prf[i] += prf[i-1];
    }

    int mx=0;
    for (int i=0; i<n; i++) {
        mx = max(mx, prf[(st[i]+k > 60000 ? 60000:st[i]+k)] - prf[st[i]]);
    }
    cout<< mx;

}