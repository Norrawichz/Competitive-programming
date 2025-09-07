#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>> n>>k;
        cout<< n*((k-1)/(n-1))+(k%(n-1)==0? n-1:k%(n-1))<<endl;
    }
}