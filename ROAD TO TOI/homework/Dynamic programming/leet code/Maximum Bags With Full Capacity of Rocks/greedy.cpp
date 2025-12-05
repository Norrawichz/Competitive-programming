#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, add;
    cin>> n>> add;

    vector<int> c(n), r(n);
    for (int i=0; i<n; i++) cin>> c[i];
    for (int i=0; i<n; i++) cin>> r[i];

    vector<int> diff(n);
    for (int i=0; i<n; i++) {
        diff[i] = c[i]-r[i];
    }

    int ans=0;
    sort(diff.begin(), diff.end());
    for (int i=0; i<n; i++) {
        if (add >= diff[i]) {
            ans++;
            add-=diff[i];
        }
        else break;
    }
    cout<< ans;
}