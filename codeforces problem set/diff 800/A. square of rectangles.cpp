#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int a1,a2,a3,b1,b2,b3;
        cin>> a1>> b1>> a2>> b2>> a3>> b3;

        if (a1+ a2+ a3 == b1 && b1 == b2 && b2 == b3) cout<< "YES"<<endl;
        else if (a2 + a3 == a1 && b2 == b3 && b1 + b2 == a1) cout<< "YES"<< endl;
        else if (b1+b2+b3 == a1 && a1 == a2 && a2 == a3) cout<< "YES"<< endl;
        else if (b2 + b3 == b1 && a2 == a3 && a1 + a2 == b1) cout<< "YES"<< endl;
        else cout<< "NO"<< endl;
    }
}