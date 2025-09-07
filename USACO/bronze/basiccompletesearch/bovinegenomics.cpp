#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int n,m;
    cin>> n>> m;
    string s[n], p[n];
    for (int i=0; i<n; i++) cin>>s[i];
    for (int i=0; i<n; i++) cin>> p[i];

    int ans=0;
    for (int i=0; i<m; i++) {
        unordered_map<char,int> m;
        bool ok=1;
        for (int j=0; j<n; j++) m[s[j][i]]++;
        for (int j=0; j<n; j++) {
            if (m[p[j][i]] != 0) {ok=0; break;} 
        }
        if (ok) ans++;
    }
    cout<< ans;
}