#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a[3];
        cin>> a[0]>> a[1]>> a[2];

        int mx=0;
        for (int i=0; i<3; i++) {
            mx=max(mx, a[i]);
        }
        int cnt=0;
        for (int i=0; i<3; i++) {
            if (a[i] == mx) cnt++;
        }
        if (cnt>1) {
            for (int i=0; i<3; i++) {
                if (a[i] == mx) cout<< 1<< " ";
                else cout<< mx-a[i]+1<< " ";
            }
        }
        else {
            for (int i=0; i<3; i++) {
                if (a[i] == mx) cout<< 0<< " ";
                else cout<< mx-a[i]+1<< " ";
            }
        }
        cout<<'\n';

    }
}