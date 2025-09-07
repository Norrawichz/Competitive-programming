#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int r;
        cin>> r;
        if (r >= 1900) cout<< "Division 1";
        else if (r < 1900 && r >= 1600) cout<< "Division 2";
        else if (r < 1600 && r >= 1400) cout<< "Division 3";
        else cout<< "Division 4";
        cout<< endl;
    }
}