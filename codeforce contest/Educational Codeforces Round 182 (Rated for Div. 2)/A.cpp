#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
 
        int a[n+1];
        for (int i=1; i<=n; i++) cin>> a[i];
 
        for (int i=2; i<=n; i++) a[i]+=a[i-1];
 
        bool found=0;
        for (int i=1; i<=n-2 && !found; i++) {
            for (int j=i+1; j<=n-1; j++) {
                if (a[i] % 3== (a[j] - a[i])%3 && a[i]%3 == (a[n] - a[j])%3 && (a[j] - a[i])%3 ==(a[n] - a[j])%3) {
                    found=1;
                    cout<< i<< " "<< j<< "\n";
                    break;
                }
                else if (a[i] % 3!= (a[j] - a[i])%3 && a[i]%3 !=(a[n] - a[j])%3 && (a[j] - a[i])%3 !=(a[n] - a[j])%3) {
                    found=1;
                    cout<< i<< " "<< j<< "\n";
                    break;
                }
            }
        }
        if (!found) cout<< "0 0\n";
    }
}