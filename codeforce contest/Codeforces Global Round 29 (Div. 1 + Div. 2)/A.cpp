#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int x,y;
        cin>> x>> y;
 
        int ans=-1;
        if (y==1 || x==y+1 || x==y) ans=-1;
        else if (x < y) ans=2;
        else ans=3;
        cout<< ans<< "\n";
    }
}