#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m ,k;
    cin>> n>> m>> k;
    vector<int> a(n), ap(m);
    for (int i=0; i<n; i++) cin>> a[i];
    for (int i=0; i<m; i++) cin>> ap[i];

    sort(a.begin(), a.end());
    sort(ap.begin(), ap.end());
    int i=0, j=0,count=0;
    while (i<n && j<m) {
        if (abs(a[i]-ap[j]) <= k) {
            count++;
            i++;
            j++;
        }
        else if (ap[j] < a[i] - k) {
            j++;
        }
        else {
            i++;
        }
    }
    cout<< count;

}