#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int fi=n/2020, se=0;
        bool valid=0;
        while (fi >= 0) {
            if (fi*2020 + se*2021 == n) {
                valid=1;
                break;
            }  
            fi--;
            se++;
        }
        cout<< (valid? "YES\n": "NO\n");
    }
}