#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    int b[260]={};
    for (int i=0; i<n; i++) {
        int l,h,r;
        cin>> l>> h>> r;
        for (int j=l; j<r; j++) {
            b[j]=max(b[j], h);
        }
    }
    
    int prev=0;
    for (int i=1; i<=255; i++) {
        if (b[i] != prev) {
            prev=b[i];
            cout<< i<<" "<< b[i]<< " ";
        }
    }
}