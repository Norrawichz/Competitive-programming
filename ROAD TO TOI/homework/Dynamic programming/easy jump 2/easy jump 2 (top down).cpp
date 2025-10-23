#include <bits/stdc++.h>
using namespace std;

int recur(int cur) {
    if (cur == 0) return 1;
    if (cur < 0) return 0;

    return recur(cur-3) + recur(cur-5);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int pos;
    cin>> pos;

    int ans=recur(pos);
    cout<< ans;

}