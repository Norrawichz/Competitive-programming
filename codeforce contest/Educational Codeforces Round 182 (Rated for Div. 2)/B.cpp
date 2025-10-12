#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;
 
        set<int> s;
        int a[n+1], cnt0=0;
        bool b[n+1];
        for (int i=1; i<=n; i++) {
            cin>> a[i];
            if (a[i]==0) cnt0++;
            s.insert(a[i]);
        }
        for (int i=1; i<=n; i++) {
            if (a[i] == i) b[i]=1;
            else b[i]=0;
        }
 
        int l=-1, r=-1;
        for (int i=1; i<=n; i++) {
            if ((a[i]==0 && cnt0!=1) || (!b[i] && a[i] != 0) || (a[i]==0 && s.count(i) && cnt0==1)) {
                l=i;
                break;
            }
        }
        for (int i=n; i>=1; i--) {
            if ((a[i]==0 && cnt0!=1) || (!b[i] && a[i] != 0) || (a[i]==0 && s.count(i) && cnt0==1)) {
                r=i;
                break;
            }
        }
        if (r!=-1 && l!=-1) cout<< r-l+1<< "\n";\
        else cout<< 0<< "\n";
    }
}