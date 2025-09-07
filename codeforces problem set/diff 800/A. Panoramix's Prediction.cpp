#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<bool> pr(51, 1);
    for (int i=2; i<=25;i++) {
        for (int j=2; j*i<=50; j++) {
            pr[i*j]=0;
        }
    }
    int n,m;
    cin>> n>> m;
    if (pr[n] && pr[m]) {
        while (n<m-1) {
            n++;
            if (pr[n]) {
                cout<<"NO";
                return 0;
            }
        }
    }
    else {
        cout<< "NO";
        return 0;
    }
    cout<< "YES";
}