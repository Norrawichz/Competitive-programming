#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie()->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        long long n,k,x;
        cin>> n>> k>> x;
        
        if (x*2 >= k*(k+1) && x*2 <= n*(n+1) - (n-k)*(n-k+1)) cout<< "YES\n";
        else cout<< "NO\n";
    } 
}