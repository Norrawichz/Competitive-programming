#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, m;
        cin>> n>> m;
        if (n<=2) {
            cout<< 1<<endl;
            continue;
        }
        cout<< (n-2 + m-1) / m +1<< endl;
    }
}