#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s, t;
        cin>> s>> t;

        unordered_map<char, int> m;
        for (int i=0; i<s.size(); i++) {
            m[s[i]]=i+1;
        }

        char prev=t[0];
        int sm=0;
        for (int i=1; i<t.size(); i++) {
            if (t[i] != prev) {
                sm += abs(m[t[i]] - m[prev]);
                prev=t[i];
            }
        }
        cout<< sm<<'\n';
    }
}