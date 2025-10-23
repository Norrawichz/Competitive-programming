#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<pair<int,int>> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i].first;
            a[i].second=i;
        }

        sort(a.begin(), a.end());
        int ans[n];
        for (int i=0; i<n; i++) {
            if (i==n-1) ans[a[i].second] = a[i].first-a[i-1].first;
            else ans[a[i].second] = a[i].first-a[n-1].first;
        }
        for (int i=0; i<n; i++) {
            cout<< ans[i]<< " ";
        }
        cout<< "\n";
    }
}