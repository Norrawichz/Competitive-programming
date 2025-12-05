#include <bits/stdc++.h>
using namespace std;

int cnt(int n) {
    if (n != 0) return (n%10 == 0? 0:1)+cnt(n/10);
    return 0;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    vector<int> a(1000000, 0);
    for (int i=1; i<1000000; i++) {
        if (cnt(i) == 1) a[i]+=1;
        a[i] += a[i-1];
    }
    while (t--) {
        int n;
        cin>> n;
     
        cout<< a[n]<< '\n';
    }
}