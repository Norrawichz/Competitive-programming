#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a[256]={};
    string s;
    cin>> s;
    for (auto x : s) a[x]++; 
    for (int i=0; i<256; i++) {
        if (a[i] > 0) cout<< char(i)<< " ";
    }
}