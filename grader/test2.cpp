#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    if (n >= 1000 && n <= 9999) {
        int d1 = n % 10;
        int d2 = (n/10) % 10;
        int d3 = (n/100) % 10;
        int d4 = (n/1000);
        cout<< d1<<" "<< d2<< " "<<d3<<" "<< d4;
    }
    return 0;
}