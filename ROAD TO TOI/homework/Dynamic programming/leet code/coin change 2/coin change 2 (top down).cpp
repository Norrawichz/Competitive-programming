#include <bits/stdc++.h>
using namespace std;

int recur(int cur, int coin, vector<int> &coins, vector<vector<int>> &mem) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    if (mem[cur][coin] != -1) return mem[cur][coin];
    int sm=0;
    for (int i=coin; i<coins.size(); i++) {
        sm += recur(cur-coins[i], i, coins, mem); 
    }
    return mem[cur][coin] = sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,amt;
    cin>> n>> amt;

    vector<int> coins(n);
    for (int i=0; i<n; i++) cin>> coins[i];

    vector<vector<int>> mem(amt+1, vector<int> (n, -1));
    int ans = recur(amt, 0, coins, mem);
    cout<< ans;
}