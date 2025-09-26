#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int a[n], b[m];
    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<m; i++) cin>> b[i];

    int di[n];
    set<int> s;
    for (int i=n-1; i>=0; i--) {
        s.insert(a[i]);
        di[i]=s.size();
    }   
    for (int i=0; i<m; i++) cout<< di[b[i]-1]<<"\n";
}