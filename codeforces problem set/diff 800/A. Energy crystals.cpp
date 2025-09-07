#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int x, ans = 0;
        cin>> x;
        int a=0, b=0, c=0;
        while (min({a, b, c}) < x) {
            if (a <= b && a <= c) {
                a = min(b, c) * 2 + 1;
            }
            else if (b <= a && b <= c) {
                b = min(a,c) * 2 + 1;
            }
            else {
                c = min(a,b) * 2 + 1;
            }
            ans++;
        }
        cout<< ans<< endl;
    }
}