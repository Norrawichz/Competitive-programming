#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
 
        bool a[101]={};
        for (int i=0; i<n; i++) {
            int s;
            cin>> s;
            a[s]=1; 
        }
 
        int ans=0;
        for (int i=1; i<101; i++) if (a[i]) ans++;
        cout<< ans*2-1<< "\n";
        
    }
}