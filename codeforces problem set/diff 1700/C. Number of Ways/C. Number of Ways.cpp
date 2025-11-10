#include <bits/stdc++.h>
using namespace std;
#define ll long long
// i hate this
int n;

int recur(int cur, int n1, int n2, vector<int> &a, vector<vector<int>> &mem, vector<ll> &prf) {
    if (cur < 0 || n2<1 || n1<2) return 0;
    if (n1 != n && n2 != n) {
        return (prf[a.size()-1] - prf[n1-1] == prf[n1-1] - prf[n2-1] && prf[n1-1] - prf[n2-1] == prf[n2-1]);
    }

    int sm = 0;

    if (mem[n1][n2] != -1) return mem[n1][n2];

    if (n1 == n) {
        sm += recur(cur-1, cur, n2, a, mem, prf) + recur(cur-1, n1, n2, a, mem, prf);
    }
    else if (n2 == n) {
        sm += recur(cur-1, n1, cur, a, mem, prf) + recur(cur-1, n1, n2, a, mem, prf);
    }
    return mem[n1][n2] = sm;
    
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;

    vector<int> a(n);
    vector<ll> prf(n,0);
    for (int i=0; i<n; i++) {
        cin>> a[i];
        if (i!=0) prf[i]+=prf[i-1];
        prf[i]+=a[i];
    }

    vector<vector<int>> mem(n+1, vector<int> (n+1, -1));
    cout<< recur(n-1, n, n, a, mem, prf);
}