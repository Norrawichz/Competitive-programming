#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mx = 1e7+5;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    vector<bool> isp(mx, true);
    vector<int> prime;
    isp[0] = isp[1] = false;

    for (int i=2; i*i<=mx; i++) {
        if (!isp[i]) continue;
        prime.push_back(i);
        for (int j=i*i; j<=mx; j+=i) {
            isp[j] = false;
        }
    }
   
    while (t--) {
        int n;
        cin>> n;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        bool found = 0;
        for (int i=0; i<prime.size() && !found; i++) {
            for (int j=0; j<n; j++) {
                if (a[j] % prime[i] != 0) {
                    found = 1;
                    cout<< prime[i]<<'\n';
                    break;
                } 
            }
        }
    }
}