#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>> t;
    while (t--) {
        int s[10]={};
        int a,b,c;
        cin>> a>> b>> c;
        s[a]++;
        s[b]++;
        s[c]++;
        for (int i=0; i<10; i++) if (s[i]==1) cout<< i<<endl;
    }
}