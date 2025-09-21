#include <bits/stdc++.h>
using namespace std;

int n,m, i=1;

void recur() {
    cout<< n<< " x "<< i<<" = "<<n*i<<"\n";
    i++;
    if (i>m) return;
    recur();
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>> n>> m;
    recur();
}