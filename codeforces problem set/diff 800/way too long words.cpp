#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        int len=s.size();
        if (len <= 10) cout<< s<< endl;
        else {
            cout<< s[0]<< len - 2<< s[len-1]<< endl;
        }
    }
}