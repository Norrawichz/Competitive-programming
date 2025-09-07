#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    int freq[5] = {}, ans=0;
    for (int i=0; i<n; i++) {
        int a;
        cin>> a;
        freq[a]++;
    }
    ans+= freq[4];
    ans+= freq[3];
    freq[1] -= freq[3];
    ans+= (freq[2]+1)/2;
    freq[1] -= (freq[2] % 2 != 0 ? 2 : 0);
    ans+= (freq[1] > 0 ? (freq[1]+3)/4 : 0);
    cout<< ans;
}