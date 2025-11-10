#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int recur(int cur, vector<int> &a, vector<int> &mem) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    if (mem[cur] != -1) return mem[cur];
    int sm=0;
    for (auto &x : a) {
        if (cur - x >= 0) sm = (sm + recur(cur-x, a, mem)) %INF;
    }
    return mem[cur] = sm;
}
int countWays (int N, int M, vector<int> S){
    vector<int> mem(N+1, -1);
    int ans= recur(N, S, mem);
    return ans;
}
