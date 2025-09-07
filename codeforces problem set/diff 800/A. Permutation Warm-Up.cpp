#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int k = n/2;
        cout<< (n%2==0? k*k + 1 : k*(k+1)+ 1)<<endl;
    }
}