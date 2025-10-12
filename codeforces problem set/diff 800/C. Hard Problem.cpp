#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int m,a,b,c;
        cin>> m>> a>> b>> c;
        int ans=0, left=0;
        if (m >= a) {
            ans+=a;
            left += m-a;
        }
        else ans+=m;
        if (m >= b) {
            ans+=b;
            left+=m-b;
        }
        else ans+=m;
        if (left >= c) {
            ans+=c;
        }
        else {
            ans+=left;
        }
        cout<< ans<<"\n";
    }
}