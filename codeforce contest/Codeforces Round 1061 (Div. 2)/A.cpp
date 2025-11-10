#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        
        int sm=0;
        while (n / 3 != 0) {
            sm += n/3;
            n -= 2*(n/3);
        }
        cout<< sm<< '\n';
    }
}
// 13
//4 4 5
//1 2 2
