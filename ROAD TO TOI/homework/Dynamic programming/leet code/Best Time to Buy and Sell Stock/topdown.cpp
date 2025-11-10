#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int recur(int cur, bool state, vector<int> &a, vector<vector<int>> &mem) {
    if (cur <= 0 && state) return -INF;
    if (cur <= 0 && !state) return INF;

    if (mem[cur][state] != -1) return mem[cur][state];
    if (!state) return mem[cur][state]= min(a[cur-1], recur(cur-1, 0, a, mem));
    else return mem[cur][state]= max({0,recur(cur-1, 1, a, mem), a[cur-1] - recur(cur-1, 0, a, mem)});
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<vector<int>> mem(n+1, vector<int>(2, -1));
    cout<< recur(n, 1, a, mem);
}