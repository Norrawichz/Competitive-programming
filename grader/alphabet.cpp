#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    int n;
    cin>> c>> n;

    cout<< char('A' + (c - 'A' + n) % 26);
}