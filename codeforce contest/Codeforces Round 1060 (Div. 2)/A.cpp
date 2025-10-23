#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n,k;
        cin>> n>> k;
        
        string s;
        cin>> s;

        int ans=0;  
        for (int i=0; i<n; i++) {
            if (s[i] == '1') {
                bool ok=0;
                for (int j=i-1; j>=i-k+1; j--) if (s[j]=='1') {
                    ok=1;
                    break;
                }
                if (!ok) ans++;
            }
        }
        cout<< ans<< "\n";
    }
}
