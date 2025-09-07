#include <bits/stdc++.h>
using namespace std;

int main () {
    cin.tie(NULL)->sync_with_stdio(false);
    int n;
    cin>> n;
    if(n%2 == 0) cout<< (1<<(n/2))<< endl;
    else cout<< 0<< endl;
}