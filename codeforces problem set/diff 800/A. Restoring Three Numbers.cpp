#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c,d;
    cin>> a>> b>> c>> d;
    int mx=max({a,b,c,d});
    if (a != mx) cout<< mx-a<< " ";
    if (b != mx) cout<< mx-b<< " ";
    if (c != mx) cout<< mx-c<< " ";
    if (d != mx) cout<< mx-d<< " ";
}