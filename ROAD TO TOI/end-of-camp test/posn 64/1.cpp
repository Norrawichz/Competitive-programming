#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int ans=0;
    for (int i=n; i<m; i++) {
        if (i % 3 == 0 || i % 2==0) ans+=i;
    }
    cout<< ans;
}