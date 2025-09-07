#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,l,k,c;
    cin>> n>> m>>l>>k>>c;
    int s=l*k*c;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int a;
            cin>> a;
            s+=a;
        }
    }
    cout<< (s+c-1)/c;
}