#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m, ans=0;
        string s;
        
        cin>> n>> m>> s;
        int ch[7]={};
        for (auto x : s) ch[x-'A']++;
        for (auto x : ch) {
            if (x >= m) continue;
            ans += m-x;
        }
        cout<< ans<<endl;
    }
}