#include <bits/stdc++.h>
using namespace std;

int findroot(int cur, vector<int> &par) {
    if (par[cur] == cur) return cur;

    return par[cur] = findroot(par[cur], par);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> par = {0, 3, 2, 0, 1, 0, 4};
    cout<< findroot(4, par);
}