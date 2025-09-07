#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        int type=0;
        for (int i=0; i<n/2; i++) {
            if (i%2 == 0) {
                if (a[i] < a[n-i-1]) cout<< "LR";
                else cout<< "RL";
            }
            else {
                if (a[i] < a[n-i-1]) cout<< "RL";
                else cout<< "LR";
            }
        }
        if (n%2 != 0) cout<< "L";
        cout<<endl;
    }
}