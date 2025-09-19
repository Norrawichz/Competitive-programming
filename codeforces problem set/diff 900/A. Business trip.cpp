#include <bits/stdc++.h>
using namespace std;

int main() { 
    cin.tie(0)->sync_with_stdio(0);
    int k;
    cin>> k;
    int a[12];
    for (int i=0; i<12; i++) cin>> a[i];
    sort(a,a+12);

    int ans=0, r=11;
    while (r >= 0) {
        if (k <= 0) break; 
        k -= a[r];
        ans++;
        r--;
    }
    cout<< (k <= 0 ? ans : -1);
}