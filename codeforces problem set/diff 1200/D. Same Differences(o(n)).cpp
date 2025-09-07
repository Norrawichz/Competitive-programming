#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, ans=0;
        cin>> n;
        map<int,int> m;
        for (int i=0; i<n; i++) {
            int x;
            cin>> x;
            x-=i;
            ans+=m[x];
            m[x]++;
        }
        cout<< ans<<endl;

    }
}