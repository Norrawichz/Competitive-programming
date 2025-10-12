#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ll x,y,a,b;
        cin>> x>> y>> a>> b;
    
        ll ans=0;
        if (2*a > b) ans += min(x,y)*b + abs(x-y)*a; 
        else ans += a*x + a*y;
        cout<< ans<< "\n";
    }
}