#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL)->sync_with_stdio(false);
    int t;
    cin>> t;
    while (t--) {
        int n, sum=0;
        cin>> n;
        string s;
        cin>> s;

        map<char,int> m;
        for (auto x : s) {
            if (m[x] >= 1) {
                sum++;
            }
            else {
                sum+=2;
                m[x] = 1;
            }
        }
        cout<< sum<< endl;
    }
}