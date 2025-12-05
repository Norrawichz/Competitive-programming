#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> p;
    vector<bool> isprime(2250000, true);
    for (int i=2; i*i<=1500*1500; i++) {
        if (!isprime[i]) continue;
        p.push_back(i);
        for (int j=i*i; j<=1500*1500; j+=i) {
            isprime[j] = false;
        }
    }
    int cnt = 0;

    for (int i=1; i<=n; i++) {
        int ok=0;
        for (int j=0; j<p.size(); j++) {
            if (i % p[j] == 0) {
                ok++;
            }
        }
        if (ok==2) cnt++;
    }
    cout<< cnt;
}