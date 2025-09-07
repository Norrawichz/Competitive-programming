#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        if (a) {
            cout<< "HARD";
            return 0;
        }
    }
    cout<< "EASY";
}