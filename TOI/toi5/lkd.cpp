#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    vector<vector<pair<int, pair<char, string>>>> g(5);
    g[1].push_back({1, {'0', "00"}});
    g[1].push_back({2, {'1', "11"}});
    g[2].push_back({4, {'1', "01"}});
    g[2].push_back({3, {'0', "10"}});
    g[3].push_back({2, {'1', "00"}});
    g[3].push_back({1, {'0', "11"}});
    g[4].push_back({4, {'1', "10"}});
    g[4].push_back({3, {'0', "01"}});

    int cur=1;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;

        string ans="";
        if (s.size() != 16) break;
        for (int j=0; j<16; j+=2) {
            string sub = "";
            sub += s[j];
            sub += s[j+1];
            for (auto &x : g[cur]) {
                if (x.second.second == sub) {
                    ans+=x.second.first;
                    cur=x.first;
                }
            }
        }
        int asci=0;
        for (auto &x : ans) {
            asci*=2;
            asci+=x-'0';
        }
        cout<< char(asci);
    }
}