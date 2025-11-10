#include <bits/stdc++.h>
using namespace std;

int n;
const int INF = 1e9+7;

int bt(int mask, vector<vector<int>> &a, vector<int> &mem) {
    int cur=__builtin_popcount(mask);
    if (mask == 0) return 0;

    if (mem[mask] != -1) return mem[mask];
    int mn=INF;
    for (int i=0; i<n; i++) {
        if (mask & (1<<i)) {
            mask &= ~(1<<i);
            mn = min(mn, bt(mask, a, mem)+ a[cur-1][i]);
            mask |= (1<<i);
        }
    }
    return mem[mask] = mn;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
  
    cin>> n;

    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin>> a[i][j];

    vector<int> mem((1<<n), -1);
    int ans = bt((1<<n)-1, a, mem);
    cout<< ans;


}