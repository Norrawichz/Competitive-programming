#include <bits/stdc++.h>
using namespace std;

bool recur(int i, int j, string &a, string &b, vector<vector<int>> &mem) {
    if (j==0 && i==0) return true;
    else if (i<0 || j<0) return false;
    
    if (mem[i][j] != -1) return mem[i][j];

    bool ok = false;
    if (j-1 >= 0 && b[j-1] == '*') ok = recur(i, j-1, a, b, mem) || recur(i-1, j-1, a, b, mem) || recur(i-1, j, a, b, mem);
    else if (j-1 >= 0 && (b[j-1] == '?' || (i-1 >= 0 && b[j-1] == a[i-1]))) ok = recur(i-1, j-1, a, b, mem);
    return mem[i][j] = ok;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;

    vector<vector<int>> mem(a.size()+1, vector<int>(b.size()+1, -1));
    cout<< (recur(a.size(), b.size(), a, b, mem)? "YES" : "NO");
}