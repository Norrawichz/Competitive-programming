#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    
    int ans=0, n=s.size();
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') ans++;
            }
        }
    }
    cout<< ans;
}