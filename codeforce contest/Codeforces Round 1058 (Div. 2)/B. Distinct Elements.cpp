#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; 
        cin >> n;
        vector<long long> b(n+1,0);
        for (int i=1;i<=n;i++) cin >> b[i];

        vector<long long> d(n+1,0);
        for (int i=1;i<=n;i++) d[i] = b[i] - b[i-1];

        vector<vector<int>> bucket(n+1);
        for (int x=1;x<=n;x++) bucket[0].push_back(x);

        vector<int> a(n+1,0);
        for (int i=1;i<=n;i++) {
            long long j = i - d[i];
            int idx = (int)j;
            int x = bucket[idx].back();
            bucket[idx].pop_back();
            a[i] = x;
            bucket[i].push_back(x);
        }

        for (int i=1;i<=n;i++) {
            if (i>1) cout << ' ';
            cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}
