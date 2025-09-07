#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
        vector<int> a(n);
        int p=0, ne=0;
        for (int i=0; i<n; i++) {
            cin>> a[i];
            if (a[i] > 0) p++;
            else ne++;
        }
        int c=0;
        for (int i=1; i<=p; i++) {
            c++;
            cout<< c<< " ";
        }
        for (int i=1; i<=ne; i++) {
            c--;
            cout<< c<< " ";
        }
        cout<< endl;
        for (int i=1; i<=min(p,ne); i++) cout<< 1<< " "<< 0<< " ";
        for (int i=1; i<=abs(p-ne); i++) cout<< i<< " ";
        cout<< endl;
    }
}