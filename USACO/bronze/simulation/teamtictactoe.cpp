#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    vector<string> s(3);
    set<char> single;
    set<pair<char,char>> teams;
    for (int i=0; i<3; i++) cin>> s[i];
    
    for (int i=0; i<3; i++) {
        set<char> c;
        for (int j=0; j<3; j++) c.insert(s[i][j]);
        vector<char> tem;
        for (auto x : c) {
            tem.push_back(x);
        }
        sort(tem.begin(), tem.end());
        if (c.size() == 1) {
            single.insert(tem[0]);
        }
        else if (c.size() == 2) {
            teams.insert({tem[0],tem[1]});
        }
    }
    for (int i=0; i<3; i++) {
        set<char> c;
        for (int j=0; j<3; j++) c.insert(s[j][i]);
        vector<char> tem;
        for (auto x : c) {
            tem.push_back(x);
        }
        sort(tem.begin(), tem.end());
        if (c.size() == 1) {
            single.insert(tem[0]);
        }
        else if (c.size() == 2) {
            teams.insert({tem[0],tem[1]});
        }
    }
    for (int i=0; i<2; i++) {
        set<char> c;
        if (i==0) {
            c.insert(s[0][0]);
            c.insert(s[1][1]);
            c.insert(s[2][2]);
        }
        else {
            c.insert(s[0][2]);
            c.insert(s[1][1]);
            c.insert(s[2][0]);
        }
        vector<char> tem;
        for (auto x : c) {
            tem.push_back(x);
        }
        sort(tem.begin(), tem.end());
        if (c.size() == 1) {
            single.insert(tem[0]);
        }
        else if (c.size() == 2) {
            teams.insert({tem[0],tem[1]});
        }
    }
    cout<< single.size()<< endl<< teams.size();
}