#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;
    int lower_bound = (n+1)/2, ans = (lower_bound+m-1)/m*m;
    if (ans > n) ans=-1;
    cout<< ans;

}