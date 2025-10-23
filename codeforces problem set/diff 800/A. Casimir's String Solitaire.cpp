#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;

        int cnt[3]={};
        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'A') cnt[0]++;
            else if (s[i] == 'B') cnt[1]++;
            else cnt[2]++;
        }
        if (cnt[1] == cnt[0]+cnt[2]) cout<< "YES\n";
        else cout<< "NO\n";
    }
}