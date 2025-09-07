#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int mx=1, cur=0, prev=-1;
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        if (prev <= a) cur++;
        else cur =1;
        prev = a;
        mx = max(cur, mx);
    }
    cout<< mx;
}
