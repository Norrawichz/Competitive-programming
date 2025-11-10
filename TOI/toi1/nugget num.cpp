#include <bits/stdc++.h>
using namespace std;

int n, nug[3] = {6, 9, 20};
set<int> ans;

void recur(int cur) {
    if (cur > n) return;
    if (cur != 0 ) ans.insert(cur);

    for (int i=0; i<3; i++) {
        recur(cur+nug[i]);
    }
    return;

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n;

    recur(0);
    if (ans.empty()) cout<< "no";
    else {
        for (auto x : ans) cout<< x<<'\n';
    }
}