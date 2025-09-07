#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int sum=0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a==0) sum++;
            else sum+=a;
        }
        cout<< sum<< endl;
    }
}