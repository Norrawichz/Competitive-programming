#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    unordered_map<string, string> a;
    for (int i=0; i<m; i++) {
        string s1, s2;
        cin>> s1>> s2;
        if (s1.size() <= s2.size()) a[s1]=s1;
        else a[s1]=s2;
    }
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        cout<< a[s]<< " ";
    }
}