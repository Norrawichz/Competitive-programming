#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    map<string,int> m;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        m[s]++;
    }
    int mx=-1;
    string ans;
    for (auto x : m) {
        if (x.second> mx) {
            mx=x.second;
            ans=x.first;
        }
    }
    cout<< ans;
}