#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        string s;
        cin>> s;
        for (int i=0; i<s.size(); i+=2) {
            cout<< s[i];
        }
        cout<< s[s.size()-1]<<endl;
    }
}