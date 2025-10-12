#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        ll n,k;
        cin>> n>> k;

        ll c=(n+k-1)/k;
        k*=c;
        cout<< (k+n-1)/n<<"\n";

    }
}