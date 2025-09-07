#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    cout<< n/5 + (n%5 != 0 ? 1:0);
}