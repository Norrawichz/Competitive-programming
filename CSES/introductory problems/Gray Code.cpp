#include <bits/stdc++.h>
using namespace std;

int e;

vector<string> get(int n) {
    vector<string> ac;
    if (n==1) {
        ac.push_back("0");
        ac.push_back("1");
        return ac;
    }
    vector<string> prev = get(n-1);
    for (int i=0; i<prev.size(); i++) {
        string s;
        s += "0";
        s += prev[i];
        ac.push_back(s);
    }
    for (int i=prev.size()-1; i>=0; i--) {
        string s;
        s += "1";
        s += prev[i];
        ac.push_back(s);
    }
    return ac;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> e;
    vector<string> ans = get(e);
    for (int i=0; i<ans.size(); i++) {
        cout<< ans[i]<< "\n";
    }
}

