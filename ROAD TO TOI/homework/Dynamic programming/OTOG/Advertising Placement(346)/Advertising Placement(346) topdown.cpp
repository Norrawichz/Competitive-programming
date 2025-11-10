#include <bits/stdc++.h>
using namespace std;

int recur(int cur, vector<int> &a, vector<int> &mem) {
    if (cur == 1) return a[0];
    if (cur < 1) return 0;

    if (mem[cur] != -1) return mem[cur];
    return mem[cur] = max(recur(cur-1, a, mem), recur(cur-2, a, mem) + a[cur-1]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<int> mem(n+1, -1);
    int ans = recur(n, a, mem);
    cout<< ans;
}