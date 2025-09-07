#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    for (int i=0; i<t; i++) {
        int a, x, y;
        bool found=false;
        cin>> a>> x>> y;
        int dif1=abs(a-x), dif2=abs(a-y);
        for (int j=1; j<=100; j++) {
            if (j == a) continue;
            int d1=abs(j-x), d2=abs(j-y);
            if (d1 < dif1 && d2 < dif2) {
                found = true;
                break;
            }
        }
        if (found) cout<< "YES"<< endl;
        else cout<< "NO" << endl;
    }
}