#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int a[]={4,7,44,77,47,74,444,447,477,777,744,774,747,474};
    for (auto x : a) {
        if (n % x == 0) {
            cout<< "YES";
            return 0;
        }
    }
    cout<< "NO";
}