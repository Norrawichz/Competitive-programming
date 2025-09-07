#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, e=0, o=0;
        cin>> n;
        for (int i=0; i<n; i++) {
            int s;
            cin>> s;
            if (s%2 != i%2) {
                if (i%2 == 0) e++;
                else o++;
            }
        }
        if (e != o) cout<< -1<< endl;
        else cout<< e<< endl;
    }
}