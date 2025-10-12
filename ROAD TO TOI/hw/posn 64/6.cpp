#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int sm=0;
    string s;
    cin>> s;

    for (int i=s.size()-2; i>=0; i-=2) sm+=s[i]-'0';
    sm*=3;
    for (int i=s.size()-3; i>=0; i-=2) sm+=s[i]-'0';

    if ((sm + (s[s.size()-1]-'0'))%10 == 0) cout<< "YES";
    else cout<< "NO";
}