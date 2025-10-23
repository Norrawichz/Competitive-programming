#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    string tem="314159265358979323846264338327";
    while (t--) {
        string s;
        cin>> s;

        int cnt=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i] != tem[i]) break;
            cnt++;
        }
        cout<< cnt<<"\n";
    }
}