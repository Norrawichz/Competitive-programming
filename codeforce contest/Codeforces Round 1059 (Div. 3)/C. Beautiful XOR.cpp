#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin>>t)) return 0;
    while (t--) {
        long long a,b; 
        cin>>a>>b;
        if (a==b) { 
            cout<<0<<"\n";
            continue;
        }

        int de;
        for (int i=0; i<=31; i++) {
            if (a & (1<<i)) de=i;
        };
        long long p = 1LL<<de;
        if (b >= (p<<1)) {
            cout<<-1<<"\n";
            continue;
        }
        vector<long long> ops;
        if (a != p) {
            ops.push_back(a - p);
            a ^= ops.back();
        }
        ops.push_back(p - 1);
        a ^= ops.back();
        if (a != b) {
            ops.push_back(a ^ b);
            a ^= ops.back();
        }
        cout<<ops.size()<<"\n";
        for (auto x: ops) cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}
