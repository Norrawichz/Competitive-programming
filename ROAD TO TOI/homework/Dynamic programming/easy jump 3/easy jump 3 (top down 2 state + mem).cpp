#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int recur(int cur, int cnt, vector<vector<int>> &mem) {
    if (cur == 0) return cnt;
    if (cur < 0) return INF;

    if (mem[cur][cnt] != INF) return mem[cur][cnt];
    return mem[cur][cnt] = min(recur(cur-3, cnt+1, mem), recur(cur-5, cnt+1, mem));
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int pos;
    cin>> pos;

    vector<vector<int>> mem(pos+1, vector<int> (pos+1, INF));
    int ans = recur(pos, 0, mem);
    cout<< ans;
}