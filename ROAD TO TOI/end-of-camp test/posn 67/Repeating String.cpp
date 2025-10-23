#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    bool a[256]={};
    string s1, s2;
    cin>> s1>> s2;

    for (auto x : s1) a[x] = 1;
    for (auto x : s2) {
        if (a[x]) {
            cout<< x<< " ";
            a[x] = 0;
        }
    }
}