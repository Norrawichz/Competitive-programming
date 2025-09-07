#include <bits/stdc++.h>
using namespace std;

bool ch(int n) {
    bool e[10] = {};
    while (n != 0) {
        if (e[n%10]) return 0;
        else e[n%10] = 1;
        n/=10;
    }
    return 1;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int cur=n+1;
    while (true) {
        if (ch(cur)) {
            cout<< cur;
            return 0;
        }
        cur++;
    }
    
}