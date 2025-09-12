#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        bool t1=a%2, t2=b%2;
        if (a > b) {
            if (t1 == t2) cout<< 1<<endl;
            else cout<< 2<<endl;
        }  
        else if (a==b) cout<< 0<<endl;
        else {
            if (t1 == t2) cout<< 2<<endl;
            else cout<< 1<<endl;
        }
    }
}