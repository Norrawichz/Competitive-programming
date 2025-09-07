#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ul n, m, t=0;
    cin>> n>> m;
    ul a[m];
    for (int i=0; i<m; i++) cin>> a[i];
    for (int i=0; i<m-1; i++) {
        if (a[i] > a[i+1]) {
            t += n;
        }
    }
    t += a[m-1]-1 ;
    cout<< t;
}   