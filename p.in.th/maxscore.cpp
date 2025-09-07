#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int a = 0, b= 0, g = 0;
    for (int i = 1; i<=n; i++) {
        char x;
        cin>> x;
        if (i % 3 == 1 && x == 'A' || i % 3 == 2 && x == 'B' || i % 3 == 0 && x == 'C') a++;
        if (i % 4 == 1 && x == 'B' || i % 4 == 2 && x == 'A' || i % 4 == 3 && x == 'B' || i % 4 == 0 && x == 'C' ) b++;
        if ((i % 6 == 1|| i % 6 == 2) && x == 'C' || (i % 6 == 3 || i % 6 == 4) && x == 'A' || (i % 6 == 0 || i % 6 == 5) && x == 'B') g++;
    }
    int mx = max(max(a, b), g);
    cout<< mx<<endl;
    if (a == mx) cout<<"Adrian"<< endl;
    if (b == mx) cout<<"Bruno"<< endl;
    if (g == mx) cout<<"Goran"<< endl;
    return 0;
}