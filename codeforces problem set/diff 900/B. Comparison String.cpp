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

        int consec=0, cur=1;
        for (int i=0; i<n-1; i++) {
            if (s[i] == s[i+1]) cur++;
            else {
                consec = max(consec, cur);
                cur=1;
            }
        }
        consec = max(consec, cur);
        cout<< consec+1<< "\n";
    }
}