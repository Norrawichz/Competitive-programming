#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int x,y,z;
        cin>> x>> y>> z;
        int mx=max({x,y,z}), cnt=0;

        if(mx==x) cnt++;
        if(mx==y) cnt++;
        if(mx==z) cnt++;

        if (cnt==1) {
            cout<< "NO"<< "\n";
            continue;
        }
        cout<< "YES"<< "\n";
        if (mx == x && mx == y) {
            cout<< mx<< " "<< z<< " "<< z;
        }
        else if (mx == x && mx == z) {
            cout<< y<< " "<< mx<< " "<< y;
        }
        else if (mx == y && mx == z) {
            cout<< x<< " "<< x<< " "<< mx;
        }
        cout<< "\n";
    }
}