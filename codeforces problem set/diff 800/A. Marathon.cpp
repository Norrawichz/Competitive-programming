#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a;
        cin>> a;
        int ans=0;
        for (int i=0; i<3; i++) {
            int b;
            cin>> b;
            if (b > a) ans++;
        }
        cout<< ans<<endl;
    }
}