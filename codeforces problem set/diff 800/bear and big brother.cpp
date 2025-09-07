#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>> a>> b;
    int c=0;
    while (a <= b) {
        c++;
        a*=3;
        b*=2;
    }
    cout<< c;
}