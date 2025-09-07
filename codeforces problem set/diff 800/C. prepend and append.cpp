#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        string s;
        cin>> s;
        if (n == 1) {
            cout<< 1<<endl;
            continue;
        }
        int ans = n;
        for (int i=0; i<n/2; i++) {
            if ((s[i]-'0') + (s[n-i-1]-'0') == 1) {
                ans -= 2;
            }
            else break;
        }
        cout<< ans<< endl;
    }
}