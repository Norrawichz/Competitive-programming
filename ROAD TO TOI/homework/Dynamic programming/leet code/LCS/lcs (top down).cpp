#include <bits/stdc++.h>
using namespace std;

int recur(int ca, int cb, string &a, string &b, vector<vector<int>> &mem) {
    if (ca >= a.size() || cb >= b.size()) return 0;

    if (mem[ca][cb] != -1) return mem[ca][cb];
    int mx=0;
    if (a[ca] == b[cb]) mx=max(mx,recur(ca+1, cb+1, a, b, mem) + 1);
    else mx=max({mx,recur(ca+1, cb, a, b, mem), recur(ca, cb+1, a, b, mem)});
    return mem[ca][cb] = mx;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;
    vector<vector<int>> mem(a.size(), vector<int> (b.size(), -1));
    cout<< recur(0,0, a,b, mem);
}