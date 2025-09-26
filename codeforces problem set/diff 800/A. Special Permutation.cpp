#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int ans[n];
        for (int i=n; i>=1; i--) {
            ans[n-i]=i;
        }
        if (n%2==1) swap(ans[0], ans[n/2]);
        for (int i=0; i<n; i++) cout<< ans[i]<< " ";
        cout<< "\n";
    }
}