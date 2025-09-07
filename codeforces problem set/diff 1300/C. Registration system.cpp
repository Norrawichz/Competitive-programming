#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    map<string, int> m;
    for (int i=0; i<n; i++) {
        string s;
        cin>> s;
        if (m[s]) {
            cout<< s<<m[s]<<endl;
            m[s]++;
        }
        else {
            cout<< "OK"<< endl;
            m[s]++;
        }
    }
}