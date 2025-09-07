#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin>> n>> k;
    int t=240 - k, cnt=0;
    for (int i=1; i<=n; i++) {
        if (t-i*5 >= 0) {
            cnt++;
            t-=i*5;
        }
    }
    cout<< cnt;
}