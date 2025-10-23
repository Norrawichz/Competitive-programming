#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        
        if (b==1) {
            cout<< "NO\n";
            continue;
        }
        cout<< "YES\n";
        cout<< a<< " "<< a*b<<" "<< a*(b+1)<< "\n"; 

    }
}