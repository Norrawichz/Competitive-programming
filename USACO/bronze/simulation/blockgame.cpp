#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n;
    cin>> n;
    int ans[26]={};
    string q[n], p[n];
    for (int i=0; i<n; i++) cin>> q[i]>> p[i];
    for (int i=0; i<26; i++) {
        for (int j=0; j<n; j++) {
            int s1=0, s2=0;
            for (auto x : q[j]) if (x-'a'==i) s1++;
            for (auto x : p[j]) if (x-'a'==i) s2++;
            ans[i]+=max(s1,s2);
        }
    }
    for (auto x : ans) cout<< x<<endl;
}