#include <bits/stdc++.h>
using namespace std;

int n;

int recur(int num, int cur, vector<vector<int>> &mem) {
    if (cur==0) return 1;
    if (cur < 0 || num > n) return 0;

    if (mem[num][cur] != -1) return mem[num][cur];
    return mem[num][cur] = recur(num, cur-num, mem) + recur(num+1, cur, mem);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>> n;
    vector<vector<int>> mem(n+1, vector<int>(n+1,-1));
    cout<< recur(1, n, mem);

}