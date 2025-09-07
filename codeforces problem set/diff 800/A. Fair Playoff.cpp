#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int s[4], tem[4];
        for (int i=0; i<4; i++) {
            cin>> s[i];
            tem[i]=s[i];
        }
        sort(tem,tem+4);
        int mx1=tem[3], mx2=tem[2];
        if (max(s[1],s[0]) != mx1 && max(s[1],s[0]) != mx2) {
            cout<< "NO\n";
            continue;
        }
        if (max(s[2],s[3]) != mx1 && max(s[2],s[3]) != mx2) {
            cout<< "NO\n";
            continue;
        }
        cout<< "YES\n";
    }
}