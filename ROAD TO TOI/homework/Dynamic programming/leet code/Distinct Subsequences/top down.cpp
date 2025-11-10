#include <bits/stdc++.h>
using namespace std;

int recur(int i, int j, string &a, string &b, vector<vector<int>> &mem) {
    if (j < 0) return 1;
    if (i < 0) return 0;

    if (mem[i][j] != -1) return mem[i][j];
    int sm=0;
    if (a[i] == b[j]) sm += recur(i-1, j-1, a, b,mem);
    sm += recur(i-1, j, a, b, mem);
    return mem[i][j] = sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, t;
    cin>> s>> t;

    if (s.size() < t.size()) return 0;

    vector<vector<int>> mem(s.size()+1, vector<int>(t.size()+1, -1));
    cout<< recur(s.size(), t.size(), s, t, mem);
}