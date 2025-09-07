#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int ans=0;
        string s;
        cin>> s;
        for (int i=1; i<s.size()-1; i++) {
            if (s[i] == '(') ans++;
            else ans--;
            if (ans < 0) {
                cout<< "YES"<<endl;
                break;
            }
        }
        if (ans < 0) continue;
        cout<< (ans == 0? "NO" : "YES")<< endl;
    }
}