#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a[31]={};
    a[0]=1;
    for (int i=1; i<=30; i++) a[i] = (1<<i)+a[i-1];
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        for (int j=1; j<=30; j++) {
            if (n % a[j] == 0) {
                cout<< n/a[j]<<endl;
                break;
            }
        }
        
    }
}