#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,x;
        cin>> n>> x;
        if (n==1) {
            cout<< 0<< endl;
            continue;
        }
        for (int i=0; i<n; i++) {
            if (i==x) continue;
            cout<< i<< ' ';
        }
        if (n-1 >= x) cout<< x; 
        cout<< endl;    
    }
}