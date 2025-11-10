#include <bits/stdc++.h>
using namespace std;

int recur(int len, int cur, vector<int> &val, vector<vector<int>> &mem) {
    if (len < 1 || cur < 1) return 0;

    if (mem[len][cur] != -1) return mem[len][cur];
    return mem[len][cur] = max(recur(len-1, cur, val, mem), (cur-len >=0 ? recur(len, cur-len, val, mem)+val[len] : 0) );
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<int> val(n+1);
    for (int i=1; i<=n; i++) cin>> val[i];

    vector<vector<int>> mem(n+1, vector<int> (n+1, -1));
    int ans = recur(n,n,val,mem);
    cout<< ans;

}