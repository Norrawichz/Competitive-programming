#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    int ans=0;
    while (m > n) {
        if (m%2 == 0) m/=2;
        else m+=1;
        ans++;
    }
    cout<< ans+(n-m);
}