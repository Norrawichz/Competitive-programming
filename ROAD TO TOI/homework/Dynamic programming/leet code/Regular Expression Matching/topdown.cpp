#include <bits/stdc++.h>
using namespace std;

bool recur(int i, int j, string &a, string &b, vector<vector<int>> &mem) {
    if (i==0 && j==0) return true;
    if (i<0 || j<0) return false;

    if (mem[i][j] != -1) return mem[i][j];

    if (j-1 >= 0 && b[j-1] == '*') {
        if (j-2 >= 0 && (b[j-2] == '.'|| (i-1>=0 && b[j-2] == a[i-1]))) return mem[i][j] = recur(i-1, j, a, b, mem) || recur(i, j-2, a, b, mem);
        else return recur(i, j-2, a, b, mem);
    }
    if (j-1 >= 0 && i-1 >=0 && (b[j-1] == a[i-1] || b[j-1] == '.')) return mem[i][j] = recur(i-1, j-1, a, b, mem);
    return mem[i][j] = false;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>> a>> b;


    vector<vector<int>> mem(a.size()+1, vector<int>(b.size()+1, -1));
    for (int i=0; i<=a.size(); i++) {
        for (int j=0; j<=b.size(); j++) {
            cout<< mem[i][j]<<' ';
        }
        cout<< '\n';
    }
    cout<< recur(a.size(), b.size(), a, b, mem);

}