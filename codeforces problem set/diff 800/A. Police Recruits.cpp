#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, ans=0, cur=0;
    cin>> n;
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        if (a > 0) cur += a;
        else if (cur >0) cur--;
        else ans++;
    }
    cout<< ans;
}