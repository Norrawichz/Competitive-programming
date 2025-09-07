#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    if (n %2!=0 ) {
        cout<< -1;
        return 0;
    }
    for (int i=2; i<=n; i+=2) {
        cout<< i<< " "<< i-1<< " ";
    }
}