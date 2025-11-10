#include <bits/stdc++.h>
using namespace std;

int recur(int i, int j,bool turn, vector<int> &a, vector<vector<vector<int>>> &mem) {
    if (i>j) return 0;

    if (mem[i][j][turn] != -1) return mem[i][j][turn];

    int mx=0;
    if (!turn) mx=max(recur(i+1, j, 1, a, mem) + a[i-1], recur(i, j-1, 1, a, mem) + a[j-1]);
    else mx=max(recur(i+1, j, 0, a, mem), recur(i, j-1, 0, a, mem));
    return mem[i][j][turn] = mx;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    n*=2;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<vector<vector<int>>> mem(n+1, vector<vector<int>>(n+1, vector<int>(2, -1)));
    cout<< recur(1, n, 0, a, mem);
}