#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        for (int i=0; i<n; i++) {
            if (i%2==0) cout<< -1<< " ";
            else if (i==n-1 && n%2 == 0) cout<< 2;
            else cout<< 3<< " ";
        }
        cout<< endl;
    }
}