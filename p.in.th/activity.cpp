#include <bits/stdc++.h>
using namespace std;

long double fac(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fac(n-1);
}
int main(){
    int n;cin>>n;
    cout << fixed << setprecision(0);
    if(n == 1 || n == 2) cout << 2;
    else if(!(n%2))
         cout<< ( fac(n) ) / ( fac(n/2)*fac(n/2) );
    else
        cout<< (fac(n)*2)/ ( (fac((n-1)/2)) * (fac((n+1)/2)) );
    return 0;
}