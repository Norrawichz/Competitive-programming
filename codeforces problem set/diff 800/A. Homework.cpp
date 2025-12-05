#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int m;
        string a;
        cin>> m>> a;

        int n;
        cin>> n;

        string b, c;
        cin>> b>> c;

        for (int i=0; i<n; i++) {
            if (c[i] == 'D') a = a+b[i];
            else a = b[i]+a;
        }
        cout<< a<< '\n';
    }
}