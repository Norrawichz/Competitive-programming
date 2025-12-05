#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    int a[5] = {};
    while (t--) {
        for (int i=0; i<5; i++) {
            int b;
            cin>> b;
            a[i]+=b;
        }
    }

    int ans=a[0]+a[1]+(a[2]+1)/2;
    int twoleft = a[1];
    twoleft += (a[2]%2)*2;
    
    if (twoleft >= a[3]) {
        twoleft -= a[3];
        a[3] = 0;
        
        if (twoleft * 2 >= a[4]) {
            a[4] = 0;
        }
        else {
            a[4] -= twoleft * 2;
        }
    }
    else {
        a[3] -= twoleft;
    }

    ans += (a[3]*2 + a[4] + 7) / 8;
    cout<< ans;
}

