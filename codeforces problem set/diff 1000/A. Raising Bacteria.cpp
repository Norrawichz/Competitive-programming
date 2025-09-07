#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x;
    cin>> x;
    int cnt=0;
    while (x) {
        cnt += (x&1);
        x >>= 1;
    }
    cout<< cnt;
}