#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,t;
    cin>> n>> t;
    if (t==10 && n!=1) {
        cout<< 1;
        for (int i=0; i<n-1; i++) cout<< 0;
        return 0;
    }
    else if (t==10 && n==1) {
        cout<< -1;
        return 0;
    }
    for (int i=0; i<n; i++) cout<< t;
}