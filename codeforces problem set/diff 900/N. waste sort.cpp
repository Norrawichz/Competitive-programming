#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    while (n--) {
        long long a,b,c,a1,a2,a3,a4,a5;
        cin>> a>>b>>c>>a1>>a2>>a3>>a4>>a5;
        a -= a1;
        b -= a2;
        c -= a3;
        if (a < 0 || b < 0 || c < 0) {
            cout << "NO"<<endl;
            continue;
        }
        if (a - a4 >= 0 && b - a5 >= 0) {
            cout<< "YES"<<endl;
            continue;
        }
        else if (a - a4 >= 0 && c >= a5-b) {
            cout<< "YES"<< endl;
            continue;
        }
        else if (b - a5 >= 0 && c >= a4-a) {
            cout<< "YES"<< endl;
            continue;
        }
        else {
            a4 -= a;
            a5 -= b;
            if (c >= a4+a5 && a4 >= 0 && a5 >=0) {
                cout<< "YES"<< endl;
            }
            else {
                cout<< "NO"<< endl;
            }
        }   
    }      
}