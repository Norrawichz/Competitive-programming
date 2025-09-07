#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m,a,b;
    cin>> n>> m>> a>> b;
    cout<< min({n*a, ((n+m-1)/m)*b, (n/m)*b + (n%m)*a});
}