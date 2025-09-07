#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int h[n], g[n], ans=0;
    for (int i=0; i<n; i++) cin>> h[i]>> g[i];
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (h[i]==g[j]) ans++;
            if (g[i]==h[j]) ans++;
        }
    }
    cout<< ans;
}