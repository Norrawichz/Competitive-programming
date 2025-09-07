#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int A,B,C,a,b,c,d;
    cin>> A>> B>> C;

    for (int i=1; i<=100; i++) {
        if (A%i!=0) continue;
        for (int j=-100; j<=100; j++) {
            if (j==0 || C%j!=0) continue;
            a=i;
            c=A/i;
            if (C==0) {
                b=0;
                d=B;
            }
            else {
                b=j;
                d=C/j;
            }
            if ((a*d) + (b*c) == B) {
                cout<< a<<" "<<b<<" "<<c<<" "<< d;
                return 0;
            }
        }
    }
    cout<< "No Solution";
}