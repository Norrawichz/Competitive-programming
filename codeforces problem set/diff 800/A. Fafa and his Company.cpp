#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int ans=0;
    for (int i=1; i<=n/2; i++) {
        if ((n-i)%i == 0) ans++;
    }
    cout<< ans;
}