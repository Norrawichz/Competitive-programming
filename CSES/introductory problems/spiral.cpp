#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    for (int i=0; i<n; i++) {
        long long r,c;
        cin>> r>> c;
        long long sr, sc;
        if (max(r,c) % 2 == 0) {
            sr=1;
            sc=max(r,c);
        } 
        else {
            sr=max(r,c);
            sc=1;
        }
        long long st = (max(r,c)-1) *(max(r,c)-1);
        cout<< st+1 + abs(r-sr) + abs(c-sc)<< endl;
    }
}