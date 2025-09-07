#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string s,t;
    cin>> s>> t;
    string ans="";
    for (auto c : s) {
        ans+=c;
        if (ans.size() >= t.size()) {
            bool found=1;
            for (int i=0; i<t.size(); i++) {
                if (ans[ans.size()-t.size()+i] != t[i]) {found = 0; break;}
            }
            if (found) for (int i=0; i<t.size(); i++) ans.pop_back();
        }
    }
    cout<< ans;
}