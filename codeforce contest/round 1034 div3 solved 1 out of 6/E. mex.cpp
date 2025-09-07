#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--)  {
        int n;
        cin >> n;
        // 6
        // 3 2 0 4 5 1
        // 0:1 1:1 2:1 3:1 4:1 5:1
        vector<int> a(n), ans(n+1), diff(n+2);
        map<int, int> freq;
        for(int i=0; i<n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        for (int i=0; i<=n; i++) {
            diff[freq[i]]++;
            diff[n-i+1]--;
            if (!freq[i]) break;
        }
        for (int k=0; k<=n; k++) {
            ans[k] = (k ? ans[k-1] : 0) + diff[k];
            cout<< ans[k]<< (k!=n ? ' ': '\n');
        }
    }
}
