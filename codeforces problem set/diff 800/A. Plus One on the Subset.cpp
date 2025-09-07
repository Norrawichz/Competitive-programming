#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int mx=0, mn=INT_MAX;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            mx=max(mx,a);
            mn=min(mn,a);
        }
        cout<< mx-mn<<endl;
    }
}