#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];
    sort(a,a+n);
    if (a[0] == 0) {
        int j=1;
        while (a[j]==0) j++;
        swap(a[0],a[j]);
    }
    for (auto x : a) cout<< x;
}