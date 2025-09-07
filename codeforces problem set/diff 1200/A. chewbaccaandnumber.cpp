#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++) {
        if (9-(s[i]-'0') < (s[i]-'0') && i==0 && 9-(s[i]-'0')!=0) s[i]=((9-(s[i]-'0'))+'0');
        else if (9-(s[i]-'0') < (s[i]-'0') && i!=0) s[i]=((9-(s[i]-'0'))+'0');
    }
    cout<< s;
}