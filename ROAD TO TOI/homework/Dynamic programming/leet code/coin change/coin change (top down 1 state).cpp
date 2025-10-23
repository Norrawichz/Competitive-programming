#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
int n, amount;

int recur(int cur, vector<int> &coin, vector<int> &mem) {
    if (cur == 0) return 0;
    if (cur < 0) return INF;

    if (mem[cur] != -1) return mem[cur];

    int mn=INF;
    for (int i=0; i<coin.size(); i++) {
        mn=min(mn, recur(cur-coin[i], coin, mem));
    }
    return mn+1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;
    vector<int> coin(n);
    for (int i=0; i<n; i++) cin>> coin[i];
    cin>> amount;

    vector<int> mem(amount+1, -1);
    int ans = recur(amount, coin, mem);
    cout<< (ans == INF+1 ? -1 : ans);

}