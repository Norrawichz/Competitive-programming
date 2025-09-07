#include <bits/stdc++.h>
using namespace std;

bool isprime(int sum) {
    for (int k = 2; k<sum; k++) {
        if (sum % k == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count = 0;
    cin>> n;
    for (int i = 1; i< n; i++) {
        for (int j = i+1; j<=n; j++) {
            if (isprime(i + j)) count++;
        }
    }
    cout<< count;
    return 0;
}