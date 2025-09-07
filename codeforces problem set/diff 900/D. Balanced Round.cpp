#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        int a[n], longest=0, cur=0;
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a, a+n);
        for (int i=1; i<n; i++) {
            if (a[i] - a[i-1] <= k) cur++;
            else cur=0;
            longest = max(longest, cur);
        }
        cout<< n-longest-1<<endl;
    }
}