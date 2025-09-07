#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    for (int i=0; i<n; i++) {
        ll a,b;
        cin>> a>> b;
      
        ll result = 1;
        while (b > 0) {
            if (b % 2 == 1) result = result * a % MOD;
            a = a * a % MOD;
            b /= 2;
        }
        cout<< result<< endl;
    }
}