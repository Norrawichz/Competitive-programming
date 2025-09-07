#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        if (a > b) {
            cout<< (a%b == 0? 0 : b-a%b)<< endl;
        }
        else {
            cout<< b-a<< endl;
        }
    }
}