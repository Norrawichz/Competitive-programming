#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        if (n % 4 != 0) {
            cout<< "NO"<< endl;
            continue;
        }
        cout<< "YES"<<endl;
        int s = 0;
        for (int i=1; i<=n/2; i++) {
            cout<< i*2<< " ";
            s += i*2;
        }
        for (int i=0; i<n/2 - 1; i++) {
            cout<< 2*i + 1<< " ";
            s -= 2*i + 1;
        }
        cout<< s<< endl;
    }
}