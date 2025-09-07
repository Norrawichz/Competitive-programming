#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    if (n<0) {
        if (n%10 < (n/10)%10) n/=10;
        else {
            int tem=n%10;
            n/=100;
            n*=10;
            n+=tem;
        }
    }
    cout<< n;
}