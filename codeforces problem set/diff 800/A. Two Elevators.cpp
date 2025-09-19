#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int a,b,c;
        cin>> a>> b>> c;
        if (a-1 == abs(b-c) + abs(c-1)) cout<< 3<<endl;
        else if (a-1 < abs(b-c) + abs(c-1)) cout<< 1<<endl;
        else if (a-1 > abs(b-c) + abs(c-1)) cout<< 2<<endl;
    }
}