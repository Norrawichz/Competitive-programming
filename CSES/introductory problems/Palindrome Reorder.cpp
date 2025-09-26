#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string n;
    cin>> n;

    int a[26]={};
    for (int i=0; i<n.size(); i++) a[n[i]-'A']++;

    int odd=0;
    for (int i=0; i<26; i++) if (a[i]%2==1) odd++;

    char ans[n.size()];
    if (odd > 1) cout<< "NO SOLUTION";
    else {
        int cur=0;
        for (int i=0; i<26; i++) {
            if (a[i]%2==1) ans[n.size()/2]=char(i+'A');
            for (int j=0; j<a[i]/2; j++) {
                ans[cur]=char(i+'A');
                ans[n.size()-cur-1]=char(i+'A');
                cur++;
            }
        }
        for (int i=0; i<n.size(); i++) cout<< ans[i];
    }
    
}