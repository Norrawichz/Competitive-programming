#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        if (a<b) swap(a,b);
        if (a==b) cout<< "0\n";
        else if (a%b == 0) cout<< "1\n";
        else cout<< "2\n";
    }
}