#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string n,m;
        cin>> n>> m;
        cout<< m[0]<<n[1]<<n[2]<< " "<<n[0]<<m[1]<<m[2]<<endl;
    }
}