#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a[1001]={},j=1;
    for (int i=1; i<=1001; i++) {
        while (j%3==0 || j%10==3) j++;
        a[i]=j++;
    }
    int t;
    cin>> t;
    while (t--) {
        int k;
        cin>> k;
        cout<< a[k]<<endl;
    }
}ไ