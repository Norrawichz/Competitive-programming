#include <bits/stdc++.h>
using namespace std;


const int MOD = 1e9+7;
int n;

int recur(int coin, int cur, vector<int> &c, vector<vector<int>> &mem) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    if (mem[coin][cur] != -1) return mem[coin][cur];
    int sm=0;
    for (int i=coin; i<=n; i++) {
        sm = (sm + recur(i, cur-c[i-1], c, mem))%MOD;
    }
    return mem[coin][cur] = sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x;
    cin>> n>> x;

    vector<int> c(n);
    for (int i=0; i<n; i++) cin>> c[i];

    vector<vector<int>> mem(n+1, vector<int>(x+1, -1));
    int ans = recur(1, x, c, mem);
    cout<< ans;

}