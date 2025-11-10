#include <bits/stdc++.h>
using namespace std;

int ch, t;

bool recur(int cur, int mask, vector<vector<int>> &mem) {
    int cnt=__builtin_popcount(mask);
    if (cur <= 0) {
        if ((ch-cur)%2) return 0;
        else return 1;
    }

    if (mem[cur][mask] != -1) return mem[cur][mask];
    bool ok=0;
    for (int i=1; i<=ch; i++) {
        if (mask & (1<<i)) {
            ok |= recur(cur-i, mask ^ (1<<i), mem);
        }
    }
    return mem[cur][mask] = ok;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> ch>> t;

    vector<vector<int>> mem(t+1, vector<int>((1<<ch), -1));
    cout<< recur(t, (1<<ch)-1, mem);

}