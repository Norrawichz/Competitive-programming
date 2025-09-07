#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin>> a>> b>> c;
    int count = 0;
    while (a > 1 || b > 1 || c > 1) {
        if (a >= b && a >= c) {
            count++;
            a /= 2;
        }
        else if (b >= c && b >= a) {
            count++;
            b /= 2;
        }
        else if (c >= a && c >= b) {
            count++;
            c /= 2;
        }
    }
    cout<< count;
    return 0;
}