#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        string s, tem="";
        cin>> n>> s;
        for (int i=0; i<n; i++) {
            if (tem[tem.size()-1] == '(' && s[i] == ')') {
                tem.pop_back();
            }
            else {
                tem+=s[i];
            }
        }
        cout<< tem.size()/2<<endl;
    }
}