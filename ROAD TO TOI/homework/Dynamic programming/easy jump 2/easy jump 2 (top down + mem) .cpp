#include <bits/stdc++.h>
using namespace std;

int recur(int cur, vector<int> &mem) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    if (mem[cur] != -1) return mem[cur];
    return mem[cur] = recur(cur-3, mem) + recur(cur-5, mem);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int pos;
    cin>> pos;

    vector<int> mem(pos+1, -1);
    int ans=recur(pos, mem);
    cout<< ans;

}