#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    int ans=0;
    for (int i=0; i<n; i++) {
        int sm=0;
        unordered_set<int> m;
        m.insert(a[i]);
        for (int j=i; j<n; j++) {
            sm+=a[j];
            m.insert(a[j]);
            if (sm%(j-i+1) == 0 && m.find(sm/(j-i+1)) != m.end()) ans++;
        }
    }
    cout<< ans;
}