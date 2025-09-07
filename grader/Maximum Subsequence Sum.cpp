#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    vector<int> arr(n);
    for (int i = 0; i<n ; i++) {
        cin>> arr[i];
    }
    int mxn = arr[0], cur = arr[0];
    for (int i = 1; i<n; i++) {
        cur = max(arr[i], cur + arr[i]);
        mxn = max(cur, mxn);
    }
    cout<< mxn;
    return 0;
}