#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        int a[n];
        for (int i=0; i<n; i++) cin>> a[i];
        
        sort(a,a+n);
        if (a[0] == a[n-1]) cout<< -1<<endl;
        else {
            int mx=0;
            for (int i=0; i<n; i++) if (a[i] == a[n-1]) mx++;
            cout<< n-mx<< " "<< mx<< endl;
            for (int i=0; i<n; i++) if (a[i] != a[n-1]) cout<< a[i]<< " ";
            cout<< endl;
            for (int i=0; i<n; i++) if (a[i] == a[n-1]) cout<< a[i]<< " ";
            cout<< endl;
        }
    }
}