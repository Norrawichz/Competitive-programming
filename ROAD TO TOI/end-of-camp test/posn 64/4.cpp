#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int m,d;
    cin>> m>> d;

    for (int i=1; i<12; i++) {
        d=(d+1)%7;
    }
    if (m < 8) {
        for (int i=m; i<8; i++) {
            if (i==2)continue;
            if (i%2==0) d=(d+2)%7;
            else d=(d+3)%7;
        }
    }
    else if (m > 8) {
        for (int i=m; i>8; i--) {
            if (i%2==0) d-=2;
            else d-=3;
            if (d <= 0) d+=7;
        }
    }   
    cout<< d;
}