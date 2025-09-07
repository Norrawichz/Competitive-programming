#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    
    int a[n], tem[n];
    for (int i=0; i<n; i++) {cin>> a[i]; tem[i]=a[i];}

    int diff=0,l=-1,r=-1;
    sort(tem, tem+n);
    for (int i=0; i<n; i++) {
        if (tem[i] != a[i]) {
            diff++;
            if (l==-1) l=i+1;
            else r=i+1;
        }
    }
    if (diff == 0) {
        cout<< "yes\n1 1";
    }
    else {
        for (int i=l-1, j=1; i<r; i++, j++) {
            if (a[i] != tem[r-j]) {
                cout<< "no";
                return 0;
            }
        }
        cout<< "yes\n"<< l<< " "<<r;
    }
}
