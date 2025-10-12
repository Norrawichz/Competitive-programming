#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    ll a[n], b[n-1], c[n-2];
    unordered_map<int,int> aa,bb,cc;
    for (int i=0; i<n; i++) {
        cin>> a[i];
        aa[a[i]]++;
    }
    for (int i=0; i<n-1; i++) {
        cin>> b[i];
        bb[b[i]]++;
    }
    for (int i=0; i<n-2; i++) {
        cin>> c[i];
        cc[c[i]]++;
    }
    for (int i=0; i<n; i++) {
        if (aa[a[i]] != bb[a[i]]) {
            cout<< a[i]<<"\n";
            break;  
        }
    }
    for (int i=0; i<n-1; i++) {
        if (bb[b[i]] != cc[b[i]]) {
            cout<< b[i]<<"\n";
            break;
        }
    }
}