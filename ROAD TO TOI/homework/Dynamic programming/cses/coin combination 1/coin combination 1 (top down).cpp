#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
int n;

int recur(int cur, vector<int> &c, vector<int> &mem) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    if (mem[cur] != -1) return mem[cur];
    int sm=0;
    for (int i=0; i<n; i++) {
        sm = (sm + recur(cur-c[i], c, mem)) % MOD;
    }
    return mem[cur] = sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x;
    cin>> n>> x;

    vector<int> c(n);
    for (int i=0; i<n; i++) cin>> c[i];

    vector<int> mem(x+1, -1);
    int ans = recur(x, c, mem);
    cout<< ans;
}