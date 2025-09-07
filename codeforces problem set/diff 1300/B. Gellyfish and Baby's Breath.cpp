#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5, MOD=998244353;
int t, n, s[N]={}, p[N]={}, q[N]={};

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    cin>> t;
    s[0] = 1;
    for (int i=1; i<=N; i++) s[i] = (s[i-1] *2) % MOD;
    while (t--) {
        cin>> n;
        for (int i=0; i<n; i++) cin>> p[i];
        for (int i=0; i<n; i++) cin>> q[i];
        for (int i=0, j=0, k=0; k<n; k++) {
            if (p[k]>p[i]) i=k; if (q[k]>q[j]) j=k;
            if (p[i] != q[j]) {
                if (p[i] > q[j]) cout<< (s[p[i]] + s[q[k-i]]) % MOD<<" ";
                else cout<< (s[q[j]] + s[p[k-j]]) % MOD<< " ";
            }
            else {
                cout<< (s[p[i]] + s[max(q[k-i], p[k-j])]) % MOD<< " ";    
            }
        }
        cout<< endl;
    }
}