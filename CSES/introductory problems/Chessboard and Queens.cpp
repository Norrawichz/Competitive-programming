#include <bits/stdc++.h>
using namespace std;

char b[8][8];
bool c[8]={}, d1[16]={}, d2[16]={};
int ans=0;

void bt(int n) {
    if (n==8) {
        ans++;
        return;
    }
    for (int i=0; i<8; i++) {
        if (!c[i] && !d1[n+i] && !d2[n-i+8] && b[n][i] != '*') {
            c[i]=d1[i+n]=d2[n-i+8]=1;
            bt(n+1);
            c[i]=d1[i+n]=d2[n-i+8]=0;
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    for (int i=0; i<8;i++) {
        string s;
        cin>> s;
        for (int j=0; j<8; j++) {
            b[i][j] = s[j];
        }
    }
    bt(0);
    cout<< ans;
}