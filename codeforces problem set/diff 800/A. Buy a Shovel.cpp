#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int k, r;
    cin>> k>> r;
    int t=k%10, ans=0;
    while (true) {
        if (t%10 == 0 || t%10 == r) {
            cout<< ++ans;
            break;
        }
        ans++;
        t+=k%10;
    }
}