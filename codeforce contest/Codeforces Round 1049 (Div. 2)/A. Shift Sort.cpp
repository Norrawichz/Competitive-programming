#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;

    while (t--) {
        int n;
        cin>> n;

        string s;
        cin>> s;

        int cnt=0, ans=0;
        for (int i=0; i<n; i++) if (s[i] == '1') cnt++;

        for (int i=n-1; i>=0 && cnt>0; i--) {
            if (s[i] == '0') ans++;
            cnt--;
        }
        cout<< ans<< '\n';
    }
}