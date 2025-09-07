#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        for (int i=0; i<s.size()-2; i++) cout<< s[i];
        cout<< "i\n";
    }
}