#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        
        int sm=0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            sm+=a;
        }

        int ans;
        if (sm == n) ans=0;
        else if (sm < n) ans=1;
        else ans = sm-n;
        cout<< ans<<'\n'; 
    }
}
