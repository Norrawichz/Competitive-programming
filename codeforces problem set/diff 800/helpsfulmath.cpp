#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>> s;
    sort(s.begin(), s.end());
    int p=s.size() / 2;
    for (int i=0; i<p; i++) {
        cout<< s[i+p]<< s[i];
    }
    cout<< s[s.size()-1];
}