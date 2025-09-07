#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int pile[n];
    for (int i=0; i<n; i++) cin>> pile[i];
    for (int i=1; i<n-1; i++) pile[i]+=pile[i-1];

    int m;
    cin>> m;
    for (int i=0; i<m; i++) {
        int juicy;
        cin>> juicy;
        int l=0, r=n-1;
        while (l < r) {
            int mid=(l+r)/2;
            if (pile[mid] >= juicy) r=mid;
            else l=mid+1;
        }
        cout<< l+1<<endl;
    }
}