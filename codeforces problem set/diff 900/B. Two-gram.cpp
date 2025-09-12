#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string s;
    cin>> n>> s;

    int cnt[26][26]={};
    for (int i=0; i<n-1; i++) {
        cnt[s[i]-'A'][s[i+1]-'A']++;
    }
    int f=-1, e=-1, mx=0;
    for (int i=0; i<26; i++) {
        for (int j=0; j<26; j++) {
            if (cnt[i][j] > mx) {
                mx = cnt[i][j];
                f=i;
                e=j;
            }
        }
    }
    cout<< char(f+'A') << char(e+'A');
}