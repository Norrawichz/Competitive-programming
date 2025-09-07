#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i =0; i<n; i++) cin >> a[i];
 
        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    cout << "YES\n2\n" << a[i] << " " << a[j] << '\n';
                    found = true;
                    break;
                }
            }
        }
        if (!found) cout << "NO\n";
    }
}