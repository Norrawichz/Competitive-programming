#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int a,b;
        cin>> a>> b;
        cout<< (abs(a-b)+9)/10<< endl;
    }
}