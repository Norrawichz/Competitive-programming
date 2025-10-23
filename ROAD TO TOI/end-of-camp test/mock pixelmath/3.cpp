#include <bits/stdc++.h>
using namespace std;

int main() {
    double h1,h2,u,x,t;
    cin>> h1>> h2>> u>> x>> t;
    double ans = asin(abs(((h2-h1)/100 - x + (9.8*t*t)/2)/(u*t)));
    ans *= (180.0 / M_PI);
    cout<< ceil(ans);
}