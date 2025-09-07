#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while(t--) {
        int a[4], b[4], dx=1;
        for (int i=0; i<4; i++) cin>> a[i]>> b[i];
        sort(a, a+4);
        cout<< (a[3] - a[0])*(a[3] - a[0]) <<endl; 
    }
}