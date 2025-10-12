#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    unordered_map<char,int> um;
    for (auto x : s) um[x]++;

    string t="";
    for (int i=0; i<s.size(); i++) {
        bool ok = 0;
        for (char j='A'; j<='Z'; j++) {
            if (um[j] == 0) continue;
            if (i>0 && t[i-1]==j) continue;
            
            um[j]--;
            int mx=0;
            for (auto x : um) mx = max(mx, x.second);

            if (mx <= (s.size()-i)/2) {
                ok=1;
                t+=j;
                break;
            }
            um[j]++;
        }
        if (!ok) {
            cout<< -1;
            return 0;
        }
    }
    cout<<t; 
}