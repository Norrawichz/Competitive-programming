#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    vector<bool> a(n+1, true);
    int cnt=0, cur=1, curs=1;
    while (cnt < n) {
        if (curs==m && a[cur]) {
            curs = 1;
            cnt++;
            cout<< cur<< ' ';
            a[cur] = false;
        } 
        if (a[cur]) curs++;
        cur++;
        if (cur > n) cur=1;
    }
}