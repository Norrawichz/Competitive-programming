#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int ans=0;
    if (n >= 15) ans+=(n/15)*3000;
    n %= 15;
    if (n >= 10) {
        ans+=3000;
        n=0;
    }

    if (n >= 5) ans+=(n/5)*1500;
    n %= 5;
    if (n == 4) {
        ans+=1500;
        n=0;
    }

    if (n >= 2) ans+=(n/2)*800;
    n %= 2;
    ans+=(n)*500;
    cout<< ans;
}