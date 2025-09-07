#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b;
    cin>> a>> b;
    int ans = a;
    while (a/b != 0) {
        ans += a/b;
        a = a%b + a/b;
    }
    cout<< ans;
}