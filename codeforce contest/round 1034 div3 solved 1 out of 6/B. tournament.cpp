#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        int arr[n+1];
        int mx = 0;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        cout<< (k > 1 || arr[j] == mx ? "YES" : "NO")<< endl;
    }
    return 0;
}
