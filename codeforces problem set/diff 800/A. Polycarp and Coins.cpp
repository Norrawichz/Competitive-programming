#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        if (n==1) {
            cout<< 1<< ' '<< 0<<endl;
            continue;
        }
        int s=(n+1)/3;
        cout<< n-(s*2)<<" "<< s<<endl;
    }
}