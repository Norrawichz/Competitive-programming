#include <bits/stdc++.h>
using namespace std;

const int MAX = 200001;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    vector<bool> sieve(MAX, 0);
    for (int i=2; i*i<MAX; i++) {
        if (sieve[i]) continue;
        for (int j=i*i; j<MAX; j+=i) {
            sieve[j]=1;
        }
    }
    sieve[1]=1;
    while (t--) {
        int n;
        cin>> n;

        int a[n], b[n];
        for (int i=0; i<n; i++) cin>> a[i];
        for (int i=0; i<n; i++) cin>> b[i];

        int even=0;
        for (int i=0; i<n; i++) {
            if (a[i]%2==0) even++;
        }

        int ans=0;
        if (even >= 2) ans=0;
        else {

            bool cofac=0;
            unordered_set<int> vst;

            for (int i=0; i<n && !cofac; i++) {
                if (!sieve[a[i]]) {
                    if (vst.count(a[i])) {
                        cofac=1;
                        break;
                    }
                    vst.insert(a[i]);
                    continue;
                }
                for (int j=2; j<=a[i]/2; j++) {
                    if (sieve[j] || a[i] % j != 0) continue;
                    if (vst.count(j)) {
                        cofac=1;
                        break;
                    }
                    vst.insert(j);
                }
            }

            if (!cofac) {
                bool check=0;
    
                for (int i=0; i<n && !check; i++) {
                    if (!sieve[a[i]+1]) {
                        if (vst.count(a[i]+1)) {
                            check=1;
                            break;
                        }
                    }
                    for (int j=2; j<=(a[i]+1)/2; j++) {
                        if (sieve[j] || (a[i]+1)%j != 0) continue;
                        if (vst.count(j)) {
                            check=1;
                            break;
                        }
                    }
                }
                if (check || even == 1) ans=1;
                else ans=2; 
            }
        }
        cout<< ans<<"\n";
    }
}

// ans=0 -> even num cnt >= 2 , same prime factor like 5 25
// ans=1 -> if a[i]+1 has the co-prime factor to some elements in array, even = 1
// otherwise ans=2

// 15 5
// 12 13