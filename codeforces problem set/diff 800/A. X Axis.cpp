#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a[3];
        for (int i=0; i<3; i++) cin>> a[i];
        sort(a,a+3);
        cout<< a[1] - a[0] + a[2]-a[1]<<endl;
    }
}