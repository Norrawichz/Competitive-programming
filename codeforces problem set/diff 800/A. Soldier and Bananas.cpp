#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int k,n,w;
    cin>> k>> n>> w;
    cout<< (k*((w+1)*(w))/2 - n > 0 ? k*((w+1)*(w))/2 - n : 0);
}