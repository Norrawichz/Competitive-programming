#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int k,n;
        string s;
        cin>> n>> k>> s;
    
        int c[26]={};
        for (auto x : s) c[x-'a']++;

        int odd = 0;
        for (int i=0; i<26; i++) {
            if (c[i] % 2 != 0) odd++;
        }
        if (odd-k <= 1) cout<< "YES\n";
        else cout<< "NO\n";
    }   
}