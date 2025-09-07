#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int a, b,k;
        cin>> a>> b>> k;
        cout<< (a*b - 1 == k? "YES" : "NO")<< endl;
    }
}