#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>> n>> m;

    int a[n];
    for (int i=0; i<n; i++) cin>> a[i];

    int last=-1, cur=0, left=n;
    while (left != 0) {
        if (a[cur] <= m && a[cur] > 0) {
            left--;
            last=cur+1;
        }
        a[cur]-=m;
        cur = (cur+1)%n;
    }
    cout<< last;
}