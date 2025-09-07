#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, h;
    cin>> n>> h;
    int t=0;
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        if (a > h) t+=2;
        else t++;
    }
    cout<< t;
}
