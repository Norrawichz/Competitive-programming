#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a=n/100000,b=(n/10000)%10,c=(n/1000)%10,d=(n/100)%10,e=(n/10)%10,f=n%10;
        if (a+b+c == d+e+f) cout<< "YES\n";
        else cout<< "NO\n";
    }
}