#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, ans=0;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        set<int> seen, cur;
        for (int i=0; i<n; i++) {
            cur.insert(a[i]);
            seen.insert(a[i]);
            if (cur.size() == seen.size()) {
                ans++;
                seen.clear();
            }
        }
        cout<< ans<< endl;
    }
}