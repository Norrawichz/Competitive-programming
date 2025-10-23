#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll a,b,x;
    cin>> a>> b>> x;

    ll pro=a*b, d=1;
    while (pro/10 != 0) {
        d++;
        pro/=10;
    }
    ll m=1;
    for (int i=0; i<d-x; i++) m*=10;
    if (x > d) cout<< "_";
    else cout<< ((a*b)/m)%10;
}