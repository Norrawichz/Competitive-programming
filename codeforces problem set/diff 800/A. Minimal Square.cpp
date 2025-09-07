#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        int mn=min(a,b);
        int m2=max(mn*2, max(a,b));
        cout<< m2*m2<<endl;
    }
}