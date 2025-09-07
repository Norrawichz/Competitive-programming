#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, mod = 1e9+7, ans=1;
    cin>> n;
    
    long long result = 1, base = 2;
    while (n > 0) {
        if (n % 2 == 1) result = result * base %mod;
        base = base * base % mod;
        n /= 2;
    }
    cout<< result;
    
}