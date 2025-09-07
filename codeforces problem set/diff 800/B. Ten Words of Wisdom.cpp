#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int id=-1,q=0;
        for (int i=0; i<n; i++) {
            int a,b;
            cin>> a>> b;
            if (a <= 10 && b > q) {
                id = i+1; 
                q=b;
            }
        }
        cout<< id<<endl;
    }
}