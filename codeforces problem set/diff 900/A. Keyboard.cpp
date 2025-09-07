#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char c;
    string s;
    vector<string> tem={"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    cin>> c>> s;
    unordered_map<char,char> m;
    for (auto x : tem) {
        for (int i=0; i<x.size(); i++) {
            if (c=='R') m[x[i]] = x[i-1];
            else m[x[i]] = x[i+1];
        }
    }
    for (auto x : s) cout<< m[x];
}