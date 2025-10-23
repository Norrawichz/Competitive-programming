#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s;
        cin>> n>> s;

        int mx=0;
        unordered_map<char,int> m;
        int mem2;
        
        set<char> ss;
        for (int i=0; i<n; i++) {
            ss.insert(s[i]);
            m[s[i]]++;
        }
        mem2=ss.size();

        set<char> b;
        for (int i=0; i<n-1; i++) {
            b.insert(s[i]);
            m[s[i]]--;
            if (m[s[i]] == 0) mem2--;
            mx = max(mx, mem2+(int)b.size());
        }
        cout<< mx<< "\n";

    }
}