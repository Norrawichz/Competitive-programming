#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x,n;
    cin>> x>> n;

    int a[n+2], b[n];
    a[0]=0;
    a[n+1]=x;
    for (int i=1; i<=n; i++) {
        cin>> a[i];
        b[i-1]=a[i];
    }

    sort(a,a+n+2);
    map<int, pair<int,int>> m;
    for (int i=1; i<=n; i++) {
        m[a[i]].first = a[i]-a[i-1];
        m[a[i]].second = a[i+1]-a[i];
    }

    for (auto x : m) {
        cout<<x.first<<" "<< x.second.first << " "<< x.second.second<< "\n";
    }

    for (int i=n-1; i>=0; i--) {
        
    }
}