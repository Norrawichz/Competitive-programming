#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n,m;
        cin>> n>> m;
        if (n==1 || m== 1 || (n==2 && m==2)) cout<< "NO"<< endl;
        else cout<< "YES"<< endl;
    }
}