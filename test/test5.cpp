#include <bits/stdc++.h>
using namespace std;
int d=1;

void c(int n) {
    cout<< n<< " ";
    cout<< d<< " ";
    d++;
    if (n>1) c(n-1);
    cout<< d<< " ";
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
       c(4);
}