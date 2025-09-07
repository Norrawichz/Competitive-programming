#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    if (min(n,m) % 2 == 0) cout<< "Malvika\n";
    else cout<< "Akshat\n";
}