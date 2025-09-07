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
        ll a,b,c;
        cin>> a>> b>> c;
        
        
        ll r1 = 1;
        while (c > 0) {
            if (c % 2 == 1) r1 = r1 * b % MOD;
            b = b * b % MOD;
            c /= 2;
        }

        ll result = 1;
        while (r1 > 0) {
            if (r1 % 2 == 1) result = result * a % MOD;
            a = a * a % MOD;
            r1 /= 2;
        }
        cout<< result<< endl;
    }
}