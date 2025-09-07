#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(0);
    int n;
    cin>> n;
    int ans = n/100 + (n%100)/20 + (n%20)/10 + (n%10) / 5 + (n%5);
    cout<< ans<<endl;
}