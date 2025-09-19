#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b,c;
        cin>> a>> b>> c;

        int na = b - (c-b);
        if (na % a==0 && na>=a && na!=0) {
            cout<< "YES\n";
            continue;
        }
        
        int nb = a + (c-a)/2;
        if (nb % b==0 && (c-a)%2 == 0 && nb>=b && nb!=0) {
            cout<< "YES\n";
            continue;
        }

        int nc = a + (b-a) *2;
        if (nc % c==0 && nc>=c && nc!=0) {
            cout<< "YES\n";
            continue;
        }
        cout<< "NO\n";
    }
}