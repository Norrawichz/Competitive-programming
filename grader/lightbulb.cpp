#include<bits/stdc++.h> 
using namespace std; 

using ll = long long;

ll fac(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fac(n-1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin>> n>> k;
    if (n < k) {
        cout<< 0;
        return 0;
    }
    else if(n == k || k == 0) {
        cout<< 1;
        return 0;
    }
    ll result = fac(n) / (fac(n-k) * fac(k));
    cout<< result;
    return 0; 
}