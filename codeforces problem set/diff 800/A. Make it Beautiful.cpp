#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>> tt;
    while (tt--) {
        int n;
        cin>> n;

        int a[n], mx=-1, mn=1000;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        if (mx==mn) {
            cout<< "NO\n";
            continue;
        }
        sort(a,a+n);

        cout<< "YES\n";
        cout<< mx<< " "<<mn<< " ";
        for (int i=n-2; i>0; i--) {
            cout<< a[i]<< " ";
        }
        cout<< '\n';

    }
}