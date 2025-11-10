#include <bits/stdc++.h>
using namespace std;
int n;

int recur(int cur,int i, int j, int k, string &s) {
    if (i != n && j != n && k != n) {
        if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') return 1;
        else return 0;
    }

    if (cur < 0) return 0;

    int sm=0;
    if (i == n) sm+=recur(cur-1, cur, j, k, s)+recur(cur-1, i, j, k, s);
    else if (j == n) sm+=recur(cur-1, i, cur, k, s)+recur(cur-1, i, j, k, s);
    else if (k == n) sm+=recur(cur-1, i, j, cur, s)+recur(cur-1, i, j, k, s);
    return sm;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    n=s.size();

    cout<< recur(n-1,n,n,n,s);
}