#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,a,b;
        cin>> n>> a>> b;

        string t="";
        for (int i=0; i<a; i++) {
            t+='a'+(i>=b ? b-1: i);
        }
        
        for (int i=0; i<n; i++) {
            cout<< t[i%a];
        }
        cout<< "\n";
    }
}