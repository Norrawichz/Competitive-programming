#include <bits/stdc++.h>
using namespace std;

string s;
set<string> ans;
vector<bool> vst;

void bt(string t) {
    if (t.size()==s.size()) {
        ans.insert(t);
        return;
    }
    for (int i=0; i<s.size(); i++) {
        if (!vst[i]) {
            vst[i]=1;
            bt(t+s[i]);
            vst[i]=0;
        }
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> s;
    vst.resize(s.size(),0);
    
    bt("");
    cout<< ans.size()<<"\n";
    for (auto x : ans) cout<< x<< "\n";
}