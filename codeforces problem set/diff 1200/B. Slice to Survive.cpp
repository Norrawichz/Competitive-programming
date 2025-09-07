#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,m,a,b;
        cin>> n>> m>> a>> b;
        cout<< n/2 + m/2 - (abs((n+1)/2 - a) + abs((m+1)/2 - b))<< endl;
    }
}