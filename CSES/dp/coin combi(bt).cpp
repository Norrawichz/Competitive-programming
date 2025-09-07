#include <bits/stdc++.h>
using namespace std;

vector<int> coin;
int ans = 0, n, x;

void bt(int sum) {
    if (sum == x) {
        ans++;
        return;
    }
    else if (sum > x) {
        return;
    }
    for (auto c : coin) {
        bt(sum+c);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>> n>> x;
    coin.resize(n);
    for (int i=0; i<n; i++) cin>> coin[i];

    bt(0);
    cout<< ans;
}