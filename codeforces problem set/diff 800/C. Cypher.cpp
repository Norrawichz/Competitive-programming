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

        for (int i=0; i<n; i++) {
            int nn;
            string s;
            cin>> nn>> s;

            for (int j=0; j<s.size(); j++) {
                if (s[j] == 'U') {
                    if (a[i] == 0) a[i] = 9;
                    else a[i]--;
                }
                else {
                    if (a[i] == 9) a[i] = 0;
                    else a[i]++;
                }
            }
        }
        for (int i=0; i<n; i++) cout<< a[i]<< ' ';
        cout<< '\n';
    }
}