#include <bits/stdc++.h>
using namespace std;

int recur(int coin, int cur, vector<int> &coins, vector<vector<int>>&mem) {
    if (cur == 0) return 1;
    if (cur < 0 || coin == 0) return 0;
    
    if (mem[coin][cur] != -1) return mem[coin][cur];
    return mem[coin][cur] = recur(coin-1, cur, coins, mem) + recur(coin, cur-coins[coin-1], coins, mem);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int amount, n;
    cin>> amount>> n;

    vector<int> coins(n);
    for (int i=0; i<n; i++) cin>> coins[i];

    vector<vector<int>> mem(n+1, vector<int> (amount+1, -1));
    int ans = recur(n, amount, coins, mem);
    cout<< ans;
}