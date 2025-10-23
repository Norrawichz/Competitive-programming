#include <bits/stdc++.h>
using namespace std;

bool recur(int cur) {
    if (cur==0) return true;
    if (cur < 0) return false;

    return recur(cur-3) || recur(cur-5);
}

int main() {
    cin.tie(0)->sync_with_stdio();
    int pos;
    cin>> pos;

    int ans = recur(pos);
    cout<< (ans ? "yes": "no")<<'\n';
}