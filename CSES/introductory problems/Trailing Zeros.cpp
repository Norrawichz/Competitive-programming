#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int ans=0;
    while (n >= 5) {
        n/=5;
        ans+=n;
    }
    cout<< ans;
}