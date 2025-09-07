#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve (int k, int a, int b, int x, int y) {
    int cnt=0;
    cnt += max((k-a+x) / x, 0);
    k -= max((k-a+x) / x, 0) * x;
    cnt += max((k-b+y) / y, 0);
    return cnt;
}
int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        ll k,a,b,x,y;
        cin>> k>> a>> b>> x>> y;
        cout<< max(solve(k,a,b,x,y),solve(k,b,a,y,x))<<endl;
    }
}