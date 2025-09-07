#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long n;
    cin>> n;
    cout<< (n%2 == 0 ? n/2 : n/2 - n);
}