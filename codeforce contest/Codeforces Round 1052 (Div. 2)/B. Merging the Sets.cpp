#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, m;
        cin>> n>> m;

        vector<int> freq(m+1,0);
        vector<vector<int>> a(n);
        for (int i=0; i<n; i++) {
            int c;
            cin>> c;
            a[i].resize(c);

            for (int j=0; j<c; j++) {
                cin>> a[i][j];
                freq[a[i][j]]++;
            }
        }

        bool ok=1;
        for (int i=1; i<=m;i++) if (freq[i]==0) {
            ok=0;
            break;
        }
        if (!ok) {
            cout<< "NO\n";
            continue;
        }

        int cnt=0;
        for (int i=0; i<n; i++) {
            int need=0;
            for (int j=0; j<a[i].size(); j++) {
                if (freq[a[i][j]]-1 == 0) {
                    need=1;
                    break;
                }
            }
            if (!need) cnt++;
        }

        if (cnt >= 2) cout<< "YES\n";
        else cout<< "NO\n";
    }
}