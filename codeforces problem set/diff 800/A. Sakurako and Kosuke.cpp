#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;


        int x=0;
        for (int i=1; i<=1000; i++) {
            if (i%2 == 0) x+=i*2-1;
            else x-=i*2-1;

            //cout<< x<< '\n';
            if (abs(x) > n) {
                cout<< (i % 2== 0 ? "Kosuke\n" : "Sakurako\n");
                break;
            }
        }
    }
}