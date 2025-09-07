#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int odd=0, ev=0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a%2 == 0) ev++;
            else odd++;
        }
        if (odd %2 != 0) cout<< "NO\n";
        else cout<< "YES\n";
    }
}