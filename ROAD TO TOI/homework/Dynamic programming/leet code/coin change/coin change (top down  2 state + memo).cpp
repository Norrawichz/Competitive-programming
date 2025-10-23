#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

int n, amount;
int recur(int cur, int cnt, vector<int> &coin, vector<vector<int>> &mem) {
    if (cur==0) return cnt;
    if (cur < 0) return INF;

    if (mem[cur][cnt] != -1) return mem[cur][cnt];
    int mn=INF;
    for (int i=0; i<n; i++) {
        mn=min(mn, recur(cur-coin[i], cnt+1, coin, mem));
    }
    return mn;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> n;
    vector<int> coin(n);
    for (int i=0; i<n; i++) cin>> coin[i];

    cin>> amount;

    vector<vector<int>> mem(amount+1, vector<int> (amount+1, -1));
    cout<< recur(amount, 0, coin, mem);
    
}