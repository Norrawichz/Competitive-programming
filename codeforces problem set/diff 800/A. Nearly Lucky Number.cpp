#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long n;
    cin>> n;
    int cnt=0;
    while (n != 0) {
        if (n%10 == 4 || n%10 == 7) cnt++;
        n/=10;
    }
    cout<< (cnt == 7 || cnt==4 ? "YES":"NO");
}