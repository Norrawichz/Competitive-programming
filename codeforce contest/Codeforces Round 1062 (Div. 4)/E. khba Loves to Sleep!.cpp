#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n, k, x;
        cin>> n>> k>> x;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin>> a[i];
        sort(a.begin(),a.end());

        int curs=1;
        vector<int> dist(x+1, 0);
        
        int cur=0;
        for (int i=0; i<=a[0]; i++) dist[i] = a[0]-i;
        for (int i=a[n-1]; i<=x; i++) dist[i] = i-a[n-1];
        for (int i=a[0]; i<=a[n-1]; i++) {
            dist[i] = min(a[curs]-i, i-a[curs-1]);
            if (i==a[curs]) curs++;
        }


        for (int i=0; i<=x; i++) cout<< dist[i]<< ' ';
        


        cout<< '\n';
    }
}