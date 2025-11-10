#include <bits/stdc++.h>
using namespace std;

int l,r;

int recur(int cur, vector<int> &mem) {
    if (cur < (l+r)) return 1;

    if (mem[cur] != -1) return mem[cur];
    return mem[cur] = recur(cur*l/(r+l), mem) + recur(cur*r/(r+l), mem);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n>> l>> r;

    vector<int> mem(n+1, -1);
    cout<< recur(n, mem);
}