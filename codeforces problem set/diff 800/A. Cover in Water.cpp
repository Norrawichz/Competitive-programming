#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, mx=0, cnt=0, cur=0;
        string s;
        cin>> n>> s;
        for (auto x : s) {
            if (x == '.') {
                cur++;
                cnt++;
            }
            else cur=0;
            mx = max(cur, mx);
        }
        if (mx >= 3) cout<< 2<<endl;
        else cout<< cnt<<endl;
    }
}