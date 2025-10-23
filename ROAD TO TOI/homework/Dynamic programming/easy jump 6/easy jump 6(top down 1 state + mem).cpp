#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int recur(int cur, vector<char> &c, vector<int> &mem) {
    if (cur == 0) return 0;
    if (cur < 0 || c[cur] == '#') return INF;

    if (mem[cur] != INF) return mem[cur];
    return mem[cur] = min(recur(cur-3, c, mem), recur(cur-5, c, mem)) + 1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin>> n>> s;

    vector<char> c(n+1);
    c[0]='.';
    for (int i=1; i<=n; i++) c[i]=s[i-1];

    vector<int> mem(n+1, INF);
    int ans = recur(n, c, mem);
    cout<< (ans >= INF ? -1 : ans);
}