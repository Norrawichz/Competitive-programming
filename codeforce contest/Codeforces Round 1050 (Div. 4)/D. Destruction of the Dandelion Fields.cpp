#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int n;
        cin>> n;

        vector<long long> odd;
        long long se=0;
        for (int i=0; i<n; i++) {
            int a;
            cin>> a;
            if (a%2== 0) se+=a;
            else odd.push_back(a);
        }

        sort(odd.rbegin(), odd.rend());
        long long ans=0;
        if (odd.size() > 0) ans+=se;
        else {
            cout<< 0<<endl;
            continue;
        }

        int l=0, r=odd.size()-1;
        while (l <= r) {
            ans+=odd[l];
            l++;
            r--;
        }
        cout<< ans<<endl;
        
    }
}