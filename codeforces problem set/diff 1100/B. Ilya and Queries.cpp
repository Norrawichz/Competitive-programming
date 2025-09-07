#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int m;
    cin>> s>> m;
    vector<int> pref(s.size()+1, 0);

    for (int i=0; i<s.size(); i++) {
        if (s[i] == s[i+1]) pref[i+1]=pref[i]+1;
        else pref[i+1]=pref[i];
    }
    for (int i=0; i<m; i++) {
        int u,v;
        cin>> u>> v;
        cout<< pref[v-1]-pref[u-1]<<endl;
    }
}