#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        string s;
        cin>> n>> m>> s;
        
        int a[m];
        for (int i=0; i<m; i++) cin>> a[i];

        set<int> b;
        for (int i=0; i<m; i++) b.insert(a[i]);

        int cur=1, j=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<=i; j++) {
                
            }
        }
    }
}