#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n;
    cin>> n;
    int change[1000+1]={};
    for (int i=0; i<n; i++) {
        int st,en,am;
        cin>> st>>en>> am;
        change[st]+=am;
        change[en]-=am;
    }
    int mx=0;
    int cur=0;
    for (int i=1; i<=1000; i++) {
        cur+=change[i];
        mx=max(mx, cur);
    }
    cout<< mx;
}