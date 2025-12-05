#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin>> a[i];

        vector<int> cnt(n+1);
        for (int i=0; i<n; i++) {
            cnt[a[i]]++;
        }

        int ans=0;
        for (int i=0; i<=n; i++) {
            if (cnt[i] > i) ans+=cnt[i]-i;
            else if (cnt[i] < i) ans+=cnt[i];
        }
        cout<< ans<< '\n';
    }
}