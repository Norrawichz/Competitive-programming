#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;

        string s;
        cin>> s;

        int ans=0, prev=-1;
        for (int i=0; i<n; i++) {
            if (s[i]=='B') {
                if (prev == -1 || i-prev+1 > k) {
                    prev=i;
                    ans++;
                }
            }
        }
        cout<< ans<< "\n";
    }
}