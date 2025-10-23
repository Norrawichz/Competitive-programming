#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>> s;

    int st[4] = {}, j=1;
    for (int i=0; i<4; i++) {
        st[i] = j;
        j*=16;
    }
    int ten = 0;
    for (int i=0; i<s.size(); i++) {
        ten += (s[i] >= 65 ? ((s[i]-'A')+10):s[i]-'0')*st[s.size()-1-i];
    }
    
    int tem=ten;
    string binary="";
    while (tem/2 != 0) {
        binary = char('0'+tem%2) + binary;
        tem/=2;
    }
    if (tem == 1) binary = '1'+binary;

    string eight="";
    while (ten/8 != 0) {
        eight = char('0'+ten%8) + eight;
        ten/=8;
    }
    if (ten != 0) eight = char('0'+ten)+eight;
    cout<< binary<< "\n"<< eight;
}