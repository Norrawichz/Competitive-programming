#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;

        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];

        sort(a,a+n);
        set<int> lower;
        int cntk=0;
        for (int i=0; i<n; i++) {
            if (a[i] < k) lower.insert(a[i]);
            else if(a[i] == k) cntk++;
            else break;
        }

        int ans=k-lower.size();
        cntk-=k-lower.size();
        if (cntk > 0) ans+=cntk;
        cout<< ans<< "\n";
    }
}