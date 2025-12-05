#include <bits/stdc++.h>
using namespace std;

int recur(int cur, int add, vector<int> &c, vector<int> &r, vector<vector<int>> &mem) {
    if (cur==0) return 0;

    if (mem[cur][add] != -1) return mem[cur][add];
    return mem[cur][add] = max(recur(cur-1, add, c, r, mem), (add >= c[cur-1] - r[cur-1] ? recur(cur-1, add - c[cur-1] + r[cur-1], c, r, mem)+1:0));
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, add;
    cin>> n>> add;

    vector<int> c(n), r(n);
    for (int i=0; i<n; i++) cin>> c[i];
    for (int i=0; i<n; i++) cin>> r[i];

    vector<vector<int>> mem(n+1, vector<int>(add+1, -1));
    cout<< recur(n, add, c, r, mem);
}