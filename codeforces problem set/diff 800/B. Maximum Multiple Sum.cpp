#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int mx=0, id=-1;
    
        for (int i=2; i<=n; i++) {
            int sm = (((1+n/i)*(n/i))/2) * i;
            if (sm >= mx) {
                id=i;
                mx=sm;
            }
        }
        cout<< id<<endl;
    }
}