#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e8+3;

int recur(int i, int j, vector<vector<int>> &mem) {
    if (i==0 && j==0) return 1;
    if (i < 0 || j < 0) return 0;

    if (mem[i][j] != -1) return mem[i][j];
    return mem[i][j] = (recur(i-1, j, mem)%MOD + recur(i, j-1, mem)%MOD) % MOD;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<vector<int>> mem(n+1, vector<int>(m+1, -1));
    int ans = recur(n,m,mem);
    cout<< ans;
}