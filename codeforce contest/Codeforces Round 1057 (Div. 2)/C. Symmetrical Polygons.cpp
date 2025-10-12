#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        unordered_map<int,int> m;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        int max1=0, ans=0, cnt=0;
        unordered_set<int> mem;
        for (int i=n-1; i>=0; i--) {
            if (m[a[i]]==1) max1++;
            if (max1<2 || m[a[i]]>=2) {
                ans+=a[i];
                cnt++;
                mem.insert(a[i]);
            }
        }
        if (cnt<3) {
            ans=0;
        }
        else if (cnt==3) {
            int fi, se;
            for (auto x : mem) {
                if (m[x]==2) fi=x;
                else se=x;
            }
            if (fi*2 <= se) ans=0;
        }
        cout<< ans<< "\n";
    }
}