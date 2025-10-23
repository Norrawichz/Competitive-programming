#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        int a[n], p[101]={};
        for (int i=0; i<n; i++) {
            cin>> a[i];
            p[a[i]]=1;
        }
        for (int i=0; i<101; i++) {
            if (p[i] == 0) {
                cout<< i<< "\n";
                break;
            }
        }
    }
}