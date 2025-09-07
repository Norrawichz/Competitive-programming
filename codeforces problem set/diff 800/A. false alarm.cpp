#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,x, si=-1, ei=-1;
        cin>> n>> x;
        for (int i=1; i<=n; i++) {
            int a;
            cin>> a;
            if (si == -1 && a == 1) si = ei = i;
            else if (a==1) ei = i;
        }
        if (ei - si + 1 <= x) cout<< "YES"<<endl;
        else cout<< "NO"<< endl;
    }
}