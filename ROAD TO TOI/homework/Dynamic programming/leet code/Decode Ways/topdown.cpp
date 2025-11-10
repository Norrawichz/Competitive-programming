#include <bits/stdc++.h>
using namespace std;

int recur(int cur, bool state, string &a, vector<vector<int>> &mem) {
    if ((state && (a[cur-1] == '0' || (a[cur]-'0')+(a[cur-1]-'0')*10 > 'Z'-'0')) || (cur == 0 && state)) return 0;
    if (cur == 0) return 1;

    if (mem[cur][state] != -1) return mem[cur][state];

    int sm=0;
    if (a[cur-1] == '0') sm += recur(cur-1, 1, a, mem);
    else {
        if (!state) sm += recur(cur-1, 0, a, mem) + recur(cur-1, 1, a, mem);
        else sm += recur(cur-1, 0, a, mem);
    }
    return mem[cur][state] = sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a;
    cin>> a;

    vector<vector<int>> mem(a.size()+1, vector<int>(2, -1));
    cout<< recur(a.size(), 0, a, mem);
    
}