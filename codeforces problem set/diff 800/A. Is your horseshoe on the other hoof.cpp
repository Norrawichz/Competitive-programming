#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    map<int,int> m;
    int cnt=0;
    for (int i=0; i<4; i++) {
        int n;
        cin>> n;
        if (m[n] == 0) m[n]++;
        else cnt++;
    }
    cout<< cnt;
}