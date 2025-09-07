#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int mx=0;
    int cur=0;
    while (n--) {
        int a, b;
        cin>> a>> b;
        cur-=a;
        cur+=b;
        mx = max(cur, mx);
    }
    cout<< mx;
}