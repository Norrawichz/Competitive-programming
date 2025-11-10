#include <bits/stdc++.h>
using namespace std;

int recur(int cur, int amt, vector<int> &a, vector<vector<int>> &mem) {
    if (cur <= 0) return 0;

    if (mem[cur][amt] != -1) return mem[cur][amt];

    int mx=0;
    if (amt > 0) mx = max(mx,recur(cur-1, amt-1,a,mem) + a[cur-1]);
    mx = max({mx, recur(cur-1, amt, a, mem), recur(cur-2, amt, a, mem)+a[cur-1]});
    return mem[cur][amt] = mx;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,g;
    cin>> n>> g;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>> a[i];

    vector<vector<int>> mem(n+1, vector<int>(g+1, -1));
    cout<< recur(n, g, a, mem);

}